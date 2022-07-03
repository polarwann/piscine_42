/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplir_de_0_tableau.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:05:46 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/18 19:07:39 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**remplir_0_tableau(int **tab_2d)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (tab_2d[i])
	{
		while (y < 4)
		{
			tab_2d[i][y] = 0;
			y++;
		}
		y = 0;
		i++;
	}
	return (tab_2d);
}
