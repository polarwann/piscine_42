/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:12 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/19 10:38:44 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		**condition_1_part_2(int *tab_entree, int **tab_double);
int		**condition_1_part_3(int *tab_entree, int **tab_double);

int	**condition_1(int *tab_entree, int **tab_double)
{
	int	i;

	i = 0;
	while (tab_entree[i] != '\0')
	{
		if (tab_entree[i] == 1)
		{
			if (i < 4)
				tab_double[0][i] = 4;
			else if (i < 8)
				tab_double[3][i - 4] = 4;
			else if (i < 12)
				tab_double[i - 8][0] = 4;
			else if (i < 16)
				tab_double[i - 12][3] = 4;
		}
		i++;
	}
	condition_1_part_2(tab_entree, tab_double);
	condition_1_part_3(tab_entree, tab_double);
	return (tab_double);
}

int	**condition_1_part_2(int *tab_entree, int **tab_double)
{
	int	i;

	i = 0;
	while (tab_entree[i] != '\0')
	{
		if (tab_entree[i] == 2)
		{
			if (i < 4 && tab_entree[i + 4] == 1)
				tab_double[0][i] = 3;
			if (i > 3 && i < 8 && tab_entree[i - 4] == 1)
				tab_double[3][i - 4] = 3;
			if (i > 7 && i < 12 && tab_entree[i + 4] == 1)
				tab_double[i - 8][0] = 3;
			if (i > 11 && i < 16 && tab_entree[i - 4] == 1)
				tab_double[i - 12][3] = 3;
		}
		i++;
	}
	return (tab_double);
}

int	**condition_1_part_3(int *tab_entree, int **tab_double)
{
	int	i;

	i = 0;
	while (tab_entree[i] != '\0')
	{
		if (tab_entree[i] == 2)
		{
			if (i < 4 && tab_entree[i + 4] == 3)
				tab_double[1][i] = 4;
			else if (i < 8 && tab_entree[i - 4] == 3)
				tab_double[2][i - 4] = 4;
		}
		i++;
	}
	return (tab_double);
}
