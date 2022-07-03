/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:42:15 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/21 09:29:44 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	y;

	y = nb;
	i = power;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i > 1)
	{
		nb *= y;
		i--;
	}
	return (nb);
}
