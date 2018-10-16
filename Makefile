# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 20:46:58 by modnosum          #+#    #+#              #
#    Updated: 2018/10/17 01:49:29 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include		Project.mk

SRC_EXT		:= $(libft_SRC_EXT)
OBJ_EXT		:= $(libft_OBJ_EXT)

SRC_DIR		:= $(libft_SRC_DIR)
OBJ_DIR		:= $(libft_OBJ_DIR)

NAME		:= $(libft_NAME)

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -pedantic -g

AR			:= ar
ARFLAGS		:= -crs

SRCS		:= $(shell find $(SRC_DIR) -type f -name "*.$(SRC_EXT)")
OBJS		:= $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))
DIRS		:= $(sort $(dir $(OBJS)))

.MAIN: all
.PHONY: all clean fclean re c f

all: $(NAME)
c: clean
clean:
	@rm -fr $(OBJ_DIR)
	@echo "Removed libft build directory."
f: fclean
fclean: clean
	@rm -fr $(NAME)
	@echo "Removed libft library files."
re: fclean all

$(OBJ_DIR):
	@mkdir -p $(DIRS)
	@echo "Created libft build directory."

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(IFLAGS) $(CFLAGS)

$(NAME): $(OBJS)
	@echo "Finished compiling libft object files."
	@$(AR) $(ARFLAGS) $@ $^
	@echo "Finished libft."

