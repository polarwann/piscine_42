/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudloff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:58:32 by mrudloff          #+#    #+#             */
/*   Updated: 2022/06/26 02:16:58 by mrudloff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_DICT_H
# define OPEN_DICT_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    ft_cpy_dict(char *buf, char **tab_dict, int nb_line);
void    ft_open_dict(char *buf);
char    **ft_malloc_line(char **tab_dict, char *buf, int nb_line);
char    **ft_convert_dict(void);

#endif
