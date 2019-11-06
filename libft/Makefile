# Main program
NAME = ft
SRC_MAIN = main.c
OBJ_MAIN = main.o
# Librery libft.a
NAMELIBFT = ft
LIBFT = lib/libft.a
INCS_FT = includes/ft.h
SRCS_FT = $(shell find src -name "*.c")
OBJS_FT = $(SRCS_FT:.c=.o)
# Librery libtest.a
NAMELIBTEST = test
LIBTEST = lib/libtest.a
INCS_TEST = includes/test.h
SRCS_TEST = $(shell find tests -name "*.c")
OBJS_TEST = $(SRCS_TEST:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -Iincludes
LIBFLAGS = -Llib
AR = ar rcs

all: $(NAME)

#$(NAME): $(LIBFT) $(LIBTEST) $(OBJ_MAIN)
$(NAME): $(LIBFT) $(LIBTEST)
	@echo Compiling Binary File: $@ ...
	#$(CC) -static $(CFLAGS) $(INCFLAGS) $(LIBFLAGS) -l $(NAMELIBFT) -l $(NAMELIBTEST) $(OBJ_MAIN) -o $@
	$(CC) -static $(CFLAGS) $(INCFLAGS) $(SRC_MAIN) $(LIBFT) $(LIBTEST) -o $@

$(LIBFT): $(OBJS_FT) $(INCS_FT)
	@echo Compiling FT Librery: $@ ...
	mkdir -p lib
	$(AR) $@ $^

$(LIBTEST): $(OBJS_TEST) $(INCS_TEST)
	@echo Compiling TEST Librery: $@ ...
	mkdir -p lib
	$(AR) $@ $^

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_FT) $(INCS_TEST)
	@echo Compiling Main File: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

#%.o: %.c $(INCS_FT) $(INCS_TEST)
$(OBJS_FT): $(SRCS_FT) $(INCS_FT)
	@echo Compiling FT Objects Files: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(OBJS_TEST): $(SRCS_TEST) $(INCS_TEST)
	@echo Compiling Tests Objects Files: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

clean:
	@echo Delete Objects Files: $@ ...
	$(RM) $(OBJS_FT) $(OBJSTEST) $(OBJ_MAIN)

fclean: clean
	@echo Delete Library and Binary Files: $@ ...
	$(RM) $(LIBFT) $(LIBTEST) $(NAME)

re: fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
