/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudloff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:55:27 by mrudloff          #+#    #+#             */
/*   Updated: 2022/06/26 13:18:07 by mrudloff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check_unsigned_int(char *str);
int ft_atoi(char *str);
char    *first_word(char *src);
char    *last_word(char *src);
void    ft_putstr(char *str);

#endif
