/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_4_erreur.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbretton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:50:47 by cbretton          #+#    #+#             */
/*   Updated: 2022/06/19 11:50:49 by cbretton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition_4_erreur_part_2(int *tab_entree);

int	condition_4_erreur(int *tab_entree)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab_entree[i] == 4 && tab_entree[i + 4] != 1)
			return (1);
		i++;
	}
	i = 4;
	while (i < 8)
	{
		if (tab_entree[i] == 4 && tab_entree[i - 4] != 1)
			return (1);
		i++;
	}
	return (condition_4_erreur_part_2(tab_entree));
}

int	condition_4_erreur_part_2(int *tab_entree)
{	
	int	i;

	i = 8;
	while (i < 12)
	{
		if (tab_entree[i] == 4 && tab_entree[i + 4] != 1)
			return (1);
		i++;
	}
	i = 12;
	while (i < 16)
	{
		if (tab_entree[i] == 4 && tab_entree[i - 4] != 1)
			return (1);
		i++;
	}
	return (0);
}
