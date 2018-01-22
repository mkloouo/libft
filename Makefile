#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:00 by modnosum          #+#    #+#              #
#    Updated: 2018/01/22 19:35:16 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Import da global variables and coloring
include libft.mk
include colors.mk

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -std=c99

# Directories
SRC_DIR					= ./src
OBJ_DIR					= ./obj
INC_DIR					= ./includes

# Source and object lists
SRC						:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ						:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRC:.c=.o))
INC						:= $(shell find $(INC_DIR) -type f -name "*.h")

# Phony rules
.PHONY: all clean fclean re norm c f n

# Named rules
all: $(FT_NAME)
clean:
	@rm -fR $(OBJ_DIR)
	@echo $(call CARG1, $(RED), "[$(FT_NAME)] delete obj directory.")
fclean: clean
	@rm -fR $(FT_NAME)
	@echo $(call CARG1, $(RED), "[$(FT_NAME)] delete library.")
re:
	@$(MAKE) fclean
	@$(MAKE) all
norm: $(SRC) $(INC)
	@norminette $^

# Shortcuts
c: clean
f: fclean
n: norm

# Variable rules
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo $(call CARG1, $(MAGENTA), "[$(FT_NAME)] Start compilation.")
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(FT_INC) -o $@ -c $<
	@echo $(call CARG2, $(MAGENTA), "[$(FT_NAME)] Compiling: ", $(CYAN), $<)
$(FT_NAME): $(OBJ)
	@ar crs $@ $^
	@echo $(call CARG1, $(MAGENTA), "[$(FT_NAME)] Library complete.")
