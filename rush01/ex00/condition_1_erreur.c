/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbretton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:13:44 by cbretton          #+#    #+#             */
/*   Updated: 2022/06/19 11:13:46 by cbretton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition_1_erreur(int *tab_entree)
{
	if (tab_entree[0] == 1 && tab_entree[8] != 1)
		return (-1);
	if (tab_entree[3] == 1 && tab_entree[12] != 1)
		return (-1);
	if (tab_entree[4] == 1 && tab_entree[11] != 1)
		return (-1);
	if (tab_entree[7] == 1 && tab_entree[15] != 1)
		return (-1);
	if (tab_entree[8] == 1 && tab_entree[0] != 1)
		return (-1);
	if (tab_entree[11] == 1 && tab_entree[4] != 1)
		return (-1);
	if (tab_entree[12] == 1 && tab_entree[3] != 1)
		return (-1);
	if (tab_entree[15] == 1 && tab_entree[7] != 1)
		return (-1);
	return (0);
}
