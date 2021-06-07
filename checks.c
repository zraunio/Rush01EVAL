/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:04:34 by zraunio           #+#    #+#             */
/*   Updated: 2021/06/07 11:20:07 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int error_msg(void)
{
	write (0, "Error\n", 7);
	return(0);
}

int	checks(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if ((av[i][j] >= '1' && av[i][j] <= '9' ) || av[i][j] == '.')
				j++;
			else
				return (error_msg());
		}
		if (j <= 8 || j > 9)
			return (error_msg());
		i++;
	}
	if (av[10] != NULL)
		return (error_msg());
	return (1);
}
