# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 03:04:32 by modnosum          #+#    #+#              #
#    Updated: 2018/01/16 07:24:00 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INCDIR)/

RM = rm -rf
AR = ar -crs

TARGET = libft.a

TEST := test.c

SRCDIR := srcs
OBJDIR := objs
INCDIR := includes

SRCS := $(shell find $(SRCDIR) -type f -name "*.c")
OBJS := $(patsubst $(SRCDIR)%,$(OBJDIR)%,$(SRCS:.c=.o))
INCS := $(shell find $(INCDIR) -type f -name "*.h")

.PHONY: all re fclean clean test norm f c n t

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# Typed rules
all: $(TARGET)
clean:
	@find . -type f -name "*~" -delete
	@echo "[$(TARGET)] Removed temporary (~) files."
	@$(RM) test
	@echo "[$(TARGET)] Removed test executive."
	@$(RM) $(OBJDIR)
	@echo "[$(TARGET)] Removed object files."
fclean: clean
	@$(RM) $(TARGET)
	@echo "[$(TARGET)] Removed library file."
re: fclean $(TARGET)
norm: $(SRCS) $(INCS)
	@norminette $^
	@echo "[$(TARGET)] Done 42 Norm check."
test: $(TEST) $(TARGET)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "[$(TARGET)] Created test file."

# Named rules
$(TARGET): $(OBJS)
	@echo "[$@] Compiled source files."
	@$(AR) $@ $^
	@echo "[$@] Build library."
$(OBJDIR):
	@mkdir -p $@
	@echo "[$(TARGET)] Made objects directory."

# Shortcut rules
f:
	@echo "[$(TARGET)] Using fclean shortcut."
	@$(MAKE) fclean
c:
	@echo "[$(TARGET)] Using clean shortcut."
	@$(MAKE) clean
n:
	@echo "[$(TARGET)] Using norm shortcut."
	@$(MAKE) norm
t:
	@echo "[$(TARGET)] Using test shortcut."
	@$(MAKE) test