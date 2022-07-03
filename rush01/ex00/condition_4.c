/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:11:44 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/18 19:13:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**condition_4(int *tab_entree, int **tab_double);
int	**condition_4_part_2(int i, int **tab_double);

int	**condition_4(int *tab_entree, int **tab_double)
{
	int	i;

	i = 0;
	while (tab_entree[i] != '\0' )
	{
		if (tab_entree[i] == 4)
		{
			if (i < 4)
			{
				tab_double[0][i] = 1;
				tab_double[1][i] = 2;
				tab_double[2][i] = 3;
				tab_double[3][i] = 4;
			}
			else if (i < 8 || i < 12 || i < 16)
				condition_4_part_2(i, tab_double);
		}
		i++;
	}
	return (tab_double);
}

int	**condition_4_part_2(int i, int **tab_double)
{
	if (i < 8)
	{
		tab_double[0][i - 4] = 4;
		tab_double[1][i - 4] = 3;
		tab_double[2][i - 4] = 2;
		tab_double[3][i - 4] = 1;
	}
	else if (i < 12)
	{
		tab_double[i - 8][0] = 1;
		tab_double[i - 8][1] = 2;
		tab_double[i - 8][2] = 3;
		tab_double[i - 8][3] = 4;
	}
	else if (i < 16)
	{
		tab_double[i - 12][3] = 1;
		tab_double[i - 12][2] = 2;
		tab_double[i - 12][1] = 3;
		tab_double[i - 12][0] = 4;
	}
	return (tab_double);
}
