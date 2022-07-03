/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:16:57 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/12 18:43:11 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'A' || str[i - 1] > 'Z')
			{
				if (str[i - 1] < '0' || str[i - 1] > '9')
				{
					if (str[i - 1] < 'a' || str[i - 1] > 'z')
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
