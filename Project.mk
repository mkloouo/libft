# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Project.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/10/12 19:19:03 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft_PATH		?= .

libft_SRC_EXT	:= c
libft_INC_EXT	:= h
libft_OBJ_EXT	:= o
libft_LIB_EXT	:= a

libft_SRC_DIR	:= $(libft_PATH)/source
libft_INC_DIR	:= $(libft_PATH)/include
libft_OBJ_DIR	:= $(libft_PATH)/build

libft_NAME		:= $(libft_PATH)/libft.$(libft_LIB_EXT)

libft_DEPS		:= $(shell find $(libft_SRC_DIR) -type f -name *.$(libft_SRC_EXT))
libft_DEPS		+= $(shell find $(libft_INC_DIR) -type f -name *.$(libft_INC_EXT))

IFLAGS			+= -I $(libft_INC_DIR)
LFLAGS			+= -L $(libft_PATH) -l ft

RESET_COLOR		?= \e[0m
CLEAN_COLOR		?= \e[35m
CREATE_COLOR	?= \e[32m
FINISH_COLOR	?= \e[36m

REMOVED_FILE	?= @printf "$(CLEAN_COLOR)%50s\n$(RESET_COLOR)" "Removed $(1)"
CREATED_FILE	?= @printf "$(CREATE_COLOR)%-50s$(RESET_COLOR) -> %s\n" $(1) $(2)
FINISHED_FILE	?= @printf "$(FINISH_COLOR)%50s\n$(RESET_COLOR)" "Built $(1)"
