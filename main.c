/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:04:56 by zraunio           #+#    #+#             */
/*   Updated: 2021/06/06 11:30:08 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checks(char **av);

int	main(int argc, char **argv)
{
	if (argc > 1 && argc < 11)
	{
		if (!checks(argv))
			return (-1);
		// solver(argv);
	}
	else
		write (0, "Error\n", 7);
	return (0);
}
