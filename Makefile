# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 03:04:32 by modnosum          #+#    #+#              #
#    Updated: 2018/01/04 05:54:53 by modnosum         ###   ########.fr        #
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

SRCS_DIRS := $(shell find $(SRC_DIR) -type d)
OBJS_DIRS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS_DIRS))

SRCS := $(shell find $(SRC_DIR) -type f)
OBJS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRCS:.$(SRC_EXT)=.$(OBJ_EXT)))

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
$(OBJS): | $(OBJS_DIRS)
$(OBJS_DIRS):
	@mkdir -p $@
	@echo "Make objects directory."