/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:22:41 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/19 09:49:53 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	print_tableau(int **tab_2d);
void	rush01_part_2(int *tab, int **tab_2d);
int		row(int **tab_2d, int nb);
int		column(int **tab_2d, int nb);
int		ligne(int **tab_2d, int nb);
int		**remplir_0_tableau(int **tab_2d);
int		**condition_4(int *tab_entree, int **tab_double);
int		**condition_1(int *tab_entree, int **tab_double);
int		**ft_quatrieme_chiffre(int **tab_2d, int nb);
int		condition_1_erreur(int *tab_entree);
int		condition_4_erreur(int *tab_entree);
void	fill_nbr_line_rows(int **tab_2d);

void	rush01(int *tab)
{
	int	taille_tableau;
	int	**tab_2d;
	int	i;

	taille_tableau = 0;
	while (tab[taille_tableau])
		taille_tableau++;
	if (taille_tableau != 16)
	{
		write(1, "Error\n", 6);
		return ;
	}
	tab_2d = malloc((4 + 1) * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		tab_2d[i] = malloc((4 + 1) * sizeof(int));
		i++;
	}
	rush01_part_2(tab, tab_2d);
}

void	rush01_part_2(int *tab, int **tab_2d)
{
	remplir_0_tableau(tab_2d);
	condition_4(tab, tab_2d);
	condition_1(tab, tab_2d);
	ft_quatrieme_chiffre(tab_2d, 1);
	ft_quatrieme_chiffre(tab_2d, 2);
	ft_quatrieme_chiffre(tab_2d, 3);
	ft_quatrieme_chiffre(tab_2d, 4);
	fill_nbr_line_rows(tab_2d);
	fill_nbr_line_rows(tab_2d);
	fill_nbr_line_rows(tab_2d);
	condition_4(tab, tab_2d);
	condition_1(tab, tab_2d);
	ft_quatrieme_chiffre(tab_2d, 1);
	ft_quatrieme_chiffre(tab_2d, 2);
	ft_quatrieme_chiffre(tab_2d, 3);
	ft_quatrieme_chiffre(tab_2d, 4);
	fill_nbr_line_rows(tab_2d);
	fill_nbr_line_rows(tab_2d);
	fill_nbr_line_rows(tab_2d);
	print_tableau(tab_2d);
}
