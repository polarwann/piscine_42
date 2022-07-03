/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quatrieme_chiffre.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:36:17 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/19 09:45:58 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	row(int **tab_2d, int nb);
int	column(int **tab_2d, int nb);

int	**ft_quatrieme_chiffre(int **tab_2d, int nb)
{
	int	i;
	int	j;
	int	iteration;

	i = 0;
	j = 0;
	iteration = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (tab_2d[i][j] == nb)
				iteration++;
			j++;
		}
		i++;
		j = 0;
	}
	if (iteration == 3)
	{
		i = row(tab_2d, nb);
		j = column(tab_2d, nb);
		tab_2d[i][j] = nb;
	}
	return (tab_2d);
}

int	row(int **tab_2d, int nb)
{
	int	i;
	int	j;
	int	marker;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (tab_2d[i][j] == nb)
			{
				j = 3;
				marker = 1;
			}
			j++;
		}
		if (marker == 0)
			return (i);
		marker = 0;
		i++;
		j = 0;
	}
	return (0);
}

int	column(int **tab_2d, int nb)
{
	int	i;
	int	j;
	int	marker;

	i = 0;
	j = 0;
	while (j < 4)
	{
		marker = 0;
		while (i < 4)
		{
			if (tab_2d[i][j] == nb)
			{
				i = 3;
				marker = 1;
			}
			i++;
		}
		if (marker == 0)
			return (j);
		j++;
		i = 0;
	}
	return (0);
}
