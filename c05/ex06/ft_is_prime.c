/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:29:54 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/21 09:34:19 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	nbr;

	if (nb <= 1)
		return (0);
	nbr = 2;
	while (nbr < nb && nbr < 50000)
	{
		if ((nb % nbr) == 0)
			return (0);
		nbr++;
	}
	return (1);
}