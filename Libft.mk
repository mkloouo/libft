#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/01/26 15:52:41 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for libft
# Usage: "include ../path_to_libft/../Libft.mk"
# Make sure to define FT_PATH with path to libft

FT_PATH					?= .

FT_NAME					:= libft.a

FT_I					:= -I $(FT_PATH)/includes
FT_L					:= -L $(FT_PATH) -l ft

FT_DEP					:= $(shell find $(FT_PATH)/sources -type f -name "*.c")
FT_DEP					+= $(shell find $(FT_PATH)/includes -type f -name "*.h")

# Global variables for compilation

ifndef LFLAGS
	LFLAGS					:=
	IFLAGS					:=
endif

LFLAGS					+= $(FT_L)
IFLAGS					+= $(FT_I)
