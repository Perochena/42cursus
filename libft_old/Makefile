# Main program
NAME = test_libft
SRC_MAIN = main.c
OBJ_MAIN = main.o
# Library libft.a
NAMELIBFT = ft
LIBFT = libft.a
INCS_FT = includes/ft.h
SRCS_FT = $(shell find src -name "*.c")
OBJS_FT = $(SRCS_FT:.c=.o)
# Objects tests
SRCS_TEST = $(shell find tests -name "*.c")
OBJS_TEST = $(SRCS_TEST:.c=.o)
# Compile parameter
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -Iincludes
LIBFLAGS = -Llib
AR = ar rcs

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS_TEST) $(OBJ_MAIN)
	@echo Compiling Binary File: $@ ...
	$(CC) $(CFLAGS) $(OBJ_MAIN) $(OBJS_TEST) $(LIBFT) -o $@
	@echo

$(LIBFT): $(OBJS_FT) $(INCS_FT)
	@echo Compiling FT Librery: $@ ...
	$(AR) $@ $^
	@echo

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_FT)
	@echo Compiling Main File: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@
	@echo

%.o: %.c $(INCS_FT)
	@echo Compiling FT Objects Files: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@
	#$(CC) $(CFLAGS) $(INCFLAGS) -c $^ -o $@
	@echo

clean:
	@echo Delete Objects Files: $@ ...
	$(RM) $(OBJS_FT) $(OBJSTEST) $(OBJ_MAIN)
	@echo

fclean: clean
	@echo Delete Library and Binary Files: $@ ...
	$(RM) $(LIBFT) $(LIBTEST) $(NAME)
	@echo

re: fclean all
	@echo

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
