# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrudloff <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 10:55:10 by mrudloff          #+#    #+#              #
#    Updated: 2022/06/26 16:12:00 by mrudloff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = */*.c

FLAG = -Wall -Werror -Wextra

FLAGN = -R CheckForbiddenSourceHeader

FLAGH = -R CheckDefine

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAG) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:
	fclean all

normc:
	norminette $(FLAGN) *.c

normh:
	norminette $(FLAGH) *.h
