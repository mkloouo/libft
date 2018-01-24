#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 10:02:18 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for libft
# Usage: "include ../path_to_libft/../libft.mk"
# Make sure to define L_FT with path to libft

FT_PATH					?= .

FT_NAME					:= libft.a

FT_LNK					:= -L $(FT_PATH) -l ft
FT_INC					:= -I $(FT_PATH)/includes
FT_LIB					:= $(FT_PATH)

# Global variables for compilation

ifndef LIB_LNK
LIB_LNK					:=
LIB_INC					:=
endif

LIB_LNK					+= $(FT_LNK)
LIB_INC					+= $(FT_INC)
