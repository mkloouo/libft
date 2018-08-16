# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Project.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/08/16 21:43:52 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft_PATH		?= .

libft_SRC_DIR	:= source
libft_INC_DIR	:= include
libft_OBJ_DIR	:= build

libft_NAME		:= libft.a

libft_DEPS		:= $(shell find $(libft_PATH)/$(libft_SRC_DIR) -type f -name "*.c")
libft_DEPS		+= $(shell find $(libft_PATH)/$(libft_INC_DIR) -type f -name "*.h")

IFLAGS			+= -I $(libft_PATH)/$(libft_INC_DIR)
LFLAGS			+= -L $(libft_PATH) -l ft
