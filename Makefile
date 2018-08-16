# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 20:46:58 by modnosum          #+#    #+#              #
#    Updated: 2018/08/16 21:47:42 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_EXT		:= c
OBJ_EXT		:= o
LIB_EXT		:= a

include ../libft/Project.mk

SRC_DIR		:= $(libft_SRC_DIR)
INC_DIR		:= $(libft_INC_DIR)
OBJ_DIR		:= $(libft_OBJ_DIR)

NAME		:= $(libft_NAME)

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -pedantic

AR			:= ar
ARFLAGS		:= -crs

MFLAGS		?= --no-print-directory

SRCS		:= $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
OBJS		:= $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))
DIRS		:= $(sort $(dir $(OBJS)))

RESET_COLOR	?= \e[0m
RED_COLOR	?= \e[31m
GREEN_COLOR	?= \e[32m

.MAIN: all
.PHONY: all fclean clean re

all: $(NAME)

clean:
	@rm -Rf $(OBJ_DIR)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(OBJ_DIR)"

fclean: clean
	@rm -Rf $(NAME)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(NAME)"

re: clean all

$(DIRS):
	@mkdir -p $@

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(DIRS)
	@$(CC) -o $@ -c $< $(IFLAGS) $(CFLAGS)
	@printf "%-30s -> %s\n" $< $@

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@printf "$(GREEN_COLOR)%-30s\n$(RESET_COLOR)" "Built $(NAME)"
