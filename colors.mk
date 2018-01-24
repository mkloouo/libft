#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    colors.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/20 15:45:31 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 10:16:22 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

ifndef COLORS

COLORS						:=

ifeq ($(shell uname), Darwin)
ESC							:= "\\033"
endif
ifeq ($(shell uname), Linux)
ESC							:= "\x1B"
endif

RES							:= $(ESC)"[0m"
RED							:= $(ESC)"[31m"
GREEN						:= $(ESC)"[32m"
BLUE						:= $(ESC)"[34m"
MAGENTA						:= $(ESC)"[35m"
CYAN						:= $(ESC)"[36m"
CARG1						= $(1)$(2)$(RES)
CARG2						= $(call CARG1, $(1), $(2)) $(call CARG1,\
								$(3), $(4))

endif
