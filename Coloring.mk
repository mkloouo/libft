#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Coloring.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/24 20:41:10 by modnosum          #+#    #+#              #
#    Updated: 2018/01/24 20:52:59 by modnosum         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

UNAME					:= $(shell uname)

ifeq ($(UNAME),Linux)
	ESC						:= "\x1B"
	EFLAG					:= -e
else ifeq ($(UNAME),Darwin)
	ESC						:= "\\033"
endif

ifeq ($(UNAME),$(filter Linux Darwin,$(UNAME)))
	INSERT					= $(ESC)[$(1)m
	PRINT					= @echo $(EFLAG) $(1)$(2)$(RES) $(3)$(4)$(RES)

	RES						= $(call INSERT,0)
	RED						= $(call INSERT,31)
	GREEN					= $(call INSERT,32)
	YELLOW					= $(call INSERT,33)
	BLUE					= $(call INSERT,34)
	MAGENTA					= $(call INSERT,35)
	CYAN					= $(call INSERT,36)
endif
