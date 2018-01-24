#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:00 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 22:04:14 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Compiler Configuration
CC						= gcc
CFLAGS					= -Wall -Wextra -Werror -pedantic -fsanitize=address

# Archiver Configuration
AR						?= ar
ARFLAGS					= -crs

# Directories
SRC_DIR					:= ./sources
OBJ_DIR					:= ./objects

# Source and object lists
SRCS					:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS					:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS:.c=.o))

# Add outside variables
include Libft.mk

# Phony rules
.PHONY: all clean fclean re c f

# Named rules
all: $(FT_NAME)
clean:
	@rm -fR $(OBJ_DIR)
	$(call PRINT,$(MAGENTA),"Removed $(OBJ_DIR).")
fclean: clean
	@rm -fR $(FT_NAME)
	$(call PRINT,$(MAGENTA),"Removed $(FT_NAME).")
re: fclean all

# Used for colored out
include Coloring.mk

# Variable rules
$(FT_NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	$(call PRINT,$(GREEN),"Build $@.")
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS) $(IFLAGS)
	$(call PRINT,$(BLUE),"$< ->",$(GREEN),"$@")
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	$(call PRINT,$(BLUE),"Create $@ directory")

# Shortcuts
c: clean
f: fclean
