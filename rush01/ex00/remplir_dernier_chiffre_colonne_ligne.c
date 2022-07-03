/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplir_dernier_chiffre_colonne_ligne.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nminotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:01:13 by nminotte          #+#    #+#             */
/*   Updated: 2022/06/19 18:01:22 by nminotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	loop_rows(int **tab_2d);
void	fill_nbr_line_rows(int **tab_2d);
void	fill(int **tab_2d, int i, int y);
int		find_p(int **tab_2d, int q, int reverse);

void	fill(int **tab_2d, int x, int y)
{
	int	j;
	int	nb_novalue;

	j = 0;
	nb_novalue = 10;
	while (j < 4)
	{
		nb_novalue -= tab_2d[x][j];
		j++;
	}
	tab_2d[x][y] = nb_novalue;
}

void	fill_r(int **tab_2d, int x, int y)
{
	int	j;
	int	nb_novalue;

	j = 0;
	nb_novalue = 10;
	while (j < 4)
	{
		nb_novalue = nb_novalue - tab_2d[j][y];
		j++;
	}
	tab_2d[x][y] = nb_novalue;
}

void	loop_rows(int **tab_2d)
{
	int	i;
	int	j;
	int	iteration;

	i = 0;
	j = 0;
	iteration = 0;
	while (j < 4 )
	{
		while (i < 4)
		{
			if (tab_2d[i][j] == 0)
				iteration++;
			i++;
		}
		if (iteration == 1)
		{
			i = find_p(tab_2d, j, 1);
			fill_r(tab_2d, i, j);
		}
		i = 0;
		j++;
		iteration = 0;
	}
}

int	find_p(int **tab_2d, int q, int reverse)
{
	int	p;

	p = 0;
	if (reverse == 0)
	{
		while (p < 4)
		{
			if (tab_2d[q][p] == 0)
				return (p);
			p++;
		}
	}
	if (reverse == 1)
	{
		while (p < 4)
		{
			if (tab_2d[p][q] == 0)
				return (p);
			p++;
		}
	}
	return (0);
}

void	fill_nbr_line_rows(int **tab_2d)
{
	int	i;
	int	j;
	int	iteration;

	i = 0;
	j = 0;
	iteration = 0;
	while (i < 4 )
	{
		while (j < 4)
		{
			if (tab_2d[i][j] == 0)
				iteration++;
			j++;
		}
		if (iteration == 1)
		{
			j = find_p(tab_2d, i, 0);
			fill(tab_2d, i, j);
		}
		i++;
		j = 0;
		iteration = 0;
	}
	loop_rows(tab_2d);
}
