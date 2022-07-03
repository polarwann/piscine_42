/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:10:09 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/22 10:56:22 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	a;
	int	i;
	int	*tab;

	i = 0;
	a = min;
	if (min >= max)
	{
		return (0);
	}
	max -= min;
	tab = malloc(max * sizeof(int));
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[i] = a;
		i++;
		a++;
	}
	return (tab);
}
