/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:55:04 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/21 13:17:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*str_copy;
	int		i;
	int		y;

	y = 0;
	i = 0;
	while (src[i])
		i++;
	str_copy = malloc((i + 1) * sizeof(char));
	if (!str_copy)
		return (0);
	while (src[y])
	{
		str_copy[y] = src[y];
		y++;
	}
	str_copy[y] = '\0';
	return (str_copy);
}
