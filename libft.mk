#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/01/20 21:20:17 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for libft
# Usage: "include ../path_to_libft/../libft.mk"
# Make sure to define L_FT with path to libft

FT_PATH					?= .

FT_NAME					:= libft.a

FT_LK					:= -L $(FT_PATH) -l ft
FT_INC					:= -I $(FT_PATH)/includes
FT_LIB					:= $(FT_PATH)

# Global variables for compilation

ifndef LIB_LK
LIB_LK					:=
LIB_INC					:=
endif

LIB_LK					+= $(FT_LK)
LIB_INC					+= $(FT_INC)
