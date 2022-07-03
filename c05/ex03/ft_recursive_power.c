/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:55:33 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/16 19:15:00 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = power;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (i > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
