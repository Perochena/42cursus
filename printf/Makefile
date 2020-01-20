# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 20:35:37 by ramrodri          #+#    #+#              #
#    Updated: 2020/01/20 20:20:22 by ramrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Main program
NAME = libftprint.a
LIBFTSO = libftprint.so
INCLUDE = libftprint.h
# Library libftprint
#SRCS_FT = $(shell find . -name "*.c" ! -name "*_bonus.c" -printf "%f\n")
#SRCS_FT = $(shell find . -name "*.c" ! -name "*_bonus.c")
SRCS_FT = $(shell find . -name "*.c" ! -name "main.c")
OBJS_FT = $(SRCS_FT:.c=.o)
# Bonus
#SRCS_Bonus = $(shell find . -name "*_bonus.c" -printf "%f\n")
SRCS_Bonus = $(shell find . -name "*_bonus.c")
OBJS_Bonus = $(SRCS_Bonus:.c=.o)
# Compile parameter
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS_FT) $(INCLUDE)
	@echo Compiling FT Library: $@ ...
	$(AR) $(NAME) $(OBJS_FT)
	@echo

bonus: $(OBJS_Bonus) $(INCLUDE)
	@echo Compiling Bonus Objects Files: $@ ...
	$(AR) $(NAME) $(OBJS_Bonus)
	@echo

%.o: %.c
	@echo Compiling FT Objects Files: $@ ...
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<
	@echo

clean:
	@echo Delete Objects Files: $@ ...
	$(RM) $(OBJS_FT) $(OBJS_Bonus)
	@echo

fclean: clean
	@echo Delete Library and Binary Files: $@ ...
	$(RM) $(NAME)
	@echo

re: fclean all
	@echo

so: $(OBJS_FT) $(OBJS_Bonus) $(INCLUDE)
	@echo Compiling Library SO: $@ ..
	$(CC) -shared -fPIC -Wl,-soname,$(LIBFTSO) -o $(LIBFTSO) $(OBJS_FT) $(OBJS_Bonus)
	@echo
