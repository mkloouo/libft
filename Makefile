# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 20:46:58 by modnosum          #+#    #+#              #
#    Updated: 2018/08/25 18:28:40 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft_PATH	:= .
include $(libft_PATH)/Project.mk

SRC_EXT		:= $(libft_SRC_EXT)
OBJ_EXT		:= $(libft_OBJ_EXT)

SRC_DIR		:= $(libft_SRC_DIR)
OBJ_DIR		:= $(libft_OBJ_DIR)

NAME		:= $(libft_NAME)

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -pedantic

AR			:= ar
ARFLAGS		:= -crs

SRCS		:= $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
OBJS		:= $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))
DIRS		:= $(sort $(dir $(OBJS)))

.MAIN: all
.PHONY: all clean fclean re c f

all: $(NAME)

c: clean
clean:
	@rm -Rf $(OBJ_DIR)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(OBJ_DIR)"

f: fclean
fclean: clean
	@rm -Rf $(NAME)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(NAME)"

re: fclean all

$(OBJ_DIR):
	@mkdir -p $(DIRS)

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(IFLAGS) $(CFLAGS)
	@printf "$(GREEN_COLOR)%-30s$(RESET_COLOR) -> %s\n" $< $@

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@printf "$(GREEN_COLOR)%-30s\n$(RESET_COLOR)" "Built $(NAME)"
