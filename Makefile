# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 03:04:32 by modnosum          #+#    #+#              #
#    Updated: 2018/01/04 03:42:45 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)/

AR = ar
ARFLAGS = -crs

NAME = libft.a

LIB_EXT = a
SRC_EXT = c
OBJ_EXT = o
INC_EXT = h

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objects

SRCS := $(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJS := $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.$(SRC_EXT)=.$(OBJ_EXT))))

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re c f

all: $(NAME)
clean:
	@$(RM) -fr $(OBJ_DIR)
	@echo "Remove objects dir."
fclean: clean
	@$(RM) -fr $(NAME)
	@echo "Remove library."
re: fclean all
c: clean
f: fclean

$(NAME): $(OBJS)
	@echo "Finish object files compilation process."
	@$(AR) $(ARFLAGS) $@ $^
	@echo "Make static library file."
$(OBJS): | $(OBJ_DIR)
$(OBJ_DIR):
	@mkdir -p $@
	@echo "Make objects directory."