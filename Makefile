#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 01:19:32 by modnosum          #+#    #+#              #
#    Updated: 2017/12/06 04:08:12 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = $(wildcard ./ft_*.c)
CFLAGS = -Wall -Werror -Wextra -I./

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(SRC)
	cc -c $^ $(CFLAGS)
	ar -crs $@ *.o

clean:
	rm -fr *.o

fclean: clean
	rm -fr $(NAME)

re: fclean all