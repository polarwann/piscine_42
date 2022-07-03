/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 09:57:26 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/06/15 19:39:37 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	y;
	int	i;

	i = 0;
	y = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (ft_strncmp(&str[i], &to_find[0], y) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i] && s1[i + 1] != '\0')
			return (s1[i]);
		else if (s1[i] < s2[i] && s1[i + 1] != '\0' && s2[i + 1] != '\0')
			return (-s2[i]);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
