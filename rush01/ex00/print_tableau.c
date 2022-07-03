/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tableau.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:01:45 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/18 19:10:07 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	print_tableau(int **tab_2d)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (tab_2d[i])
	{
		while (y < 4)
		{
			if (y < 4)
			{
				ft_putnbr(tab_2d[i][y]);
				if (y != 3)
					write(1, " ", 1);
			}
			else
				write(1, &tab_2d[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		y = 0;
		i++;
	}
}
