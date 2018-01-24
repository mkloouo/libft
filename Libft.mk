#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 20:13:52 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for libft
# Usage: "include ../path_to_libft/../Libft.mk"
# Make sure to define FT_PATH with path to libft

FT_PATH					?= .

FT_NAME					:= libft.a

FT_LNK					:= -L $(FT_PATH) -l ft
FT_INC					:= -I $(FT_PATH)/includes
FT_LIB					:= $(FT_PATH)/$(FT_NAME)

# Global variables for compilation

ifndef LIB_LNK
	LFLAGS					:=
	IFLAGS					:=
endif

LFLAGS					+= $(FT_LNK)
IFLAGS					+= $(FT_INC)
