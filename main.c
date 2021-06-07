/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:04:56 by zraunio           #+#    #+#             */
/*   Updated: 2021/06/07 13:34:26 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checks(char **av);

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc > 1 && argc < 10)
	{
		if (!checks(argv))
			return (-1);
		// solver(argv);
	}
	else
		write (0, "Error\n", 7);
	return (0);
}
