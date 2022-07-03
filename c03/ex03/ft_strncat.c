/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 09:39:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/15 11:34:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y] && nb > y)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
