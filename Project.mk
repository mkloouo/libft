# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Project.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/08/25 20:37:08 by modnosum         ###   ########.fr        #
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

libft_DEPS		:= $(shell find $(libft_PATH)/$(libft_SRC_DIR) -type f -name *.$(libft_SRC_EXT))
libft_DEPS		+= $(shell find $(libft_PATH)/$(libft_INC_DIR) -type f -name *.$(libft_INC_EXT))

IFLAGS			+= -I $(libft_PATH)/$(libft_INC_DIR)
LFLAGS			+= -L $(libft_PATH) -l ft

RESET_COLOR		?= \e[0m
CLEAN_COLOR		?= \e[35m
CREATE_COLOR	?= \e[32m
FINISH_COLOR	?= \e[36m
