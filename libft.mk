#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 14:45:46 by modnosum          #+#    #+#              #
#    Updated: 2018/01/22 22:13:01 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables for libft
# Usage: "include ../path_to_libft/../libft.mk"
# Make sure to define L_FT with path to libft

FT_PATH					?= .

FT_NAME					:= libft.a

FT_LINK					:= -L $(FT_PATH) -l ft
FT_INC					:= -I $(FT_PATH)/includes
FT_LIB					:= $(FT_PATH)

# Global variables for compilation

ifndef LIB_LINK
LIB_LINK				:=
LIB_INC					:=
endif

LIB_LINK				+= $(FT_LINK)
LIB_INC					+= $(FT_INC)
