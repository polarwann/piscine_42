/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:26:16 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/09 17:39:04 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ptra;
	int	ptrb;

	ptra = *a / *b;
	ptrb = *a % *b;
	*a = ptra;
	*b = ptrb;
}
