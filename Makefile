#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:00 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 19:58:29 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Some global variables import
include Libft.mk

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -std=c99

# Archiver Configuration
AR						?= ar
ARFLAGS					= -crs

# Directories
SRC_DIR					= ./sources
OBJ_DIR					= ./objects
INC_DIR					= ./includes

# Source and object lists
SRCS					:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS					:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS:.c=.o))

# Phony rules
.PHONY: all clean fclean re c f

# Named rules
all: $(FT_NAME)
clean:
	@rm -fR $(OBJ_DIR)
	@echo $(ECHO_FLAG) $(call CARG1, $(RED), "[$(FT_NAME)] delete obj directory.")
fclean: clean
	@rm -fR $(FT_NAME)
	@echo $(ECHO_FLAG) $(call CARG1, $(RED), "[$(FT_NAME)] delete library.")
re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all  --no-print-directory

# Variable rules
$(FT_NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)
$(OBJ_DIR): $@
	@mkdir -p $(OBJ_DIR)

# Shortcuts
c: clean
f: fclean
