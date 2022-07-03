/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:07:39 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/24 09:07:16 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*last_character(char *str_cat, char *sep, int x, int size);
int		size_of_strs(char **strs);
int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_cat;
	int		i;
	int		x;

	if (size <= 0)
	{
		str_cat = '\0';
		return (str_cat);
	}
	i = 0;
	x = size_of_strs(strs);
	str_cat = malloc((((ft_strlen(sep) * (size - 1) + x)) + 1) * sizeof(char));
	if (!str_cat)
		return (0);
	i = 0;
	str_cat[0] = '\0';
	while (strs[i])
	{
		ft_strcat(str_cat, strs[i]);
		if (strs[i + 1] != NULL)
			ft_strcat(str_cat, sep);
		i++;
	}
	last_character(str_cat, sep, x, size);
	return (str_cat);
}

char	*last_character(char *str_cat, char *sep, int x, int size)
{
	if (sep[0] == '\0')
		str_cat[x + (ft_strlen(sep) * size) + 1] = '\0';
	else
		str_cat[x + (ft_strlen(sep) * size)] = '\0';
	return (str_cat);
}

int	size_of_strs(char **strs)
{
	int	i;
	int	y;
	int	x;

	i = 0;
	y = 0;
	while (strs[i])
	{
		while (strs[i][y] != '\0')
		{
			y++;
			x++;
		}
		y = 0;
		i++;
	}
	return (x);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
