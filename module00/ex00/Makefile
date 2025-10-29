# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 18:07:11 by luluzuri          #+#    #+#              #
#    Updated: 2025/10/29 15:24:46 by luluzuri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

CC = avr-gcc

FLASH = avr-objcopy avrdude
#programmeur " arduino "
BRATE = 115200

F_CPU = 

all:

hex:

flash:

clean:

SRCDIR = src
OBJDIR = obj
INCDIR = include

# Source Files
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
SRC := $(addprefix $(SRCDIR)/, $(SRC))
OBJ := $(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(OBJ))

# Compilation mode (silent by default, set VERBOSE=1 to show commands)
VERBOSE ?= 0
ifeq ($(VERBOSE),1)
  V := 
else
  V := @
endif

# Colors
RED     := "\033[1;31m"
GREEN   := "\033[1;32m"
RESET   := "\033[0m"

# Clean Rules
clean:
	$(V)echo $(RED)'[$(NAME)] Cleaning objects'$(RESET)
	$(V)rm -rf $(OBJDIR)

.PHONY: all clean fclean re bonus regen
.DEFAULT_GOAL := all