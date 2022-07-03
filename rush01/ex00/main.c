/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:03:36 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/18 17:03:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	rush01(int *tab);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		test_tableau(char **argv);
int		main_2(int y, int *tab, char **argv);
int		test_2(char **argv);

int	main(int argc, char **argv)
{
	int	*tab;

	if (argc != 2)
	{
		write(1, "Error1", 6);
		return (1);
	}
	if (test_tableau(argv) != 0)
		return (1);
	tab = malloc(4 * sizeof(int));
	if (main_2(16, tab, argv) != 0)
		return (1);
	free(tab);
	return (0);
}

int	test_tableau(char **argv)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (i < 32)
	{
		if ((argv[1][i] < '1' && argv[1][i] > '4'))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		if ((argv[1][i] >= '1' && argv[1][i] <= '9'))
			y++;
		i += 2;
	}
	if (test_2(argv) != 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main_2(int y, int *tab, char **argv)
{
	int	i;

	tab = malloc(y * sizeof(int));
	i = 0;
	y = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '9')
		{
			tab[y] = (argv[1][i] - '0');
			i++;
			y++;
		}
		else
			i++;
	}
	rush01(tab);
	free(tab);
	return (0);
}

int	test_2(char **argv)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (argv[1][i] > '4')
			return (1);
		else if (argv[1][i] < '1' && argv[1][i] > 32)
			return (1);
		i++;
	}
	return (0);
}
