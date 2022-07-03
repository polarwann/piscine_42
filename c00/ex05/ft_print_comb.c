/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:39:39 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/09 11:58:21 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	write_nb(int a, int b, int c);

void	write_nb(int a, int b, int c)
{
	int	ca;
	int	cb;
	int	cc;

	ca = a + '0';
	cb = b + '0';
	cc = c + '0';
	write(1, &ca, 1);
	write(1, &cb, 1);
	write(1, &cc, 1);
	if (a != 7)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				write_nb(a, b, c);
				c++;
			}
			if (c > b)
				c = b + 2;
			b++;
		}
		if (b > a && c > b)
			b = a + 1;
		a++;
	}
}
