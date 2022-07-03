/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaura <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:51:32 by vsaura            #+#    #+#             */
/*   Updated: 2022/06/12 15:17:21 by vsaura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char f, int n);
void	start(int colonne);

void	rush(int colonne, int ligne)
{
	if (ligne > 0 && colonne > 0 && ligne < 2147483647 && colonne < 2147483647)
	{
		start(colonne);
		while (ligne-- > 2)
		{
			ft_putchar('B', 0);
			if (colonne > 2)
				ft_putchar('S', colonne);
			if (colonne > 1)
				ft_putchar('B', 0);
			ft_putchar('n', 0);
		}
		if (ligne > 0)
		{
			ft_putchar('A', 0);
			if (colonne > 2)
				ft_putchar('B', colonne);
			if (colonne > 1)
			{
				ft_putchar('C', 0);
				ft_putchar('n', 0);
			}
		}
	}
}

void	start(int colonne)
{
	ft_putchar('A', 0);
	if (colonne > 2)
		ft_putchar('B', colonne);
	if (colonne > 1)
		ft_putchar('C', 0);
	ft_putchar('n', 0);
}
