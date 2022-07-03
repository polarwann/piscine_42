/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:36:21 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/16 13:43:24 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nb, char *base);
void	ft_putchar(char c);
int		check_cond(int i, char *base);
int		ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_cond(int i, char *base)
{
	int	y;
	int	a;

	y = 0;
	while (base[y])
	{
		a = y + 1;
		while (base[a])
		{
			if (base[y] == base[a])
				return (0);
			a++;
		}
		y++;
	}
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		i;

	i = 0;
	if (check_cond(i, base) == 0)
		return ;
	i = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb - nb - nb;
	}
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base);
		ft_putnbr_base(nb % i, base);
	}
	else
		ft_putchar(base[nb]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
