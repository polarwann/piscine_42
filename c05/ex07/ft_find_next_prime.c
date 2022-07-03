/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:39:02 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/20 16:14:13 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	nbr;

	nbr = nb - 1;
	while (nbr > 0)
	{
		if ((nb % nbr) == 0)
			return (0);
		nbr--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	printf("%i", ft_find_next_prime(atoi(argv[1])));
}