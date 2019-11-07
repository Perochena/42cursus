# Main program
NAME = ft
SRC_MAIN = main.c
OBJ_MAIN = main.o
# Librery libbsq.a
NAMELIBFT = ft
LIBFT = lib/libft.a
INCS_FT = includes/ft.h
SRCS_FT = $(shell find src -name "*.c")
OBJS_FT = $(SRCS_FT:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -I includes
LIBFLAGS = -L lib
AR = ar -rc

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_MAIN)
	@echo Compiling Binary File: $@ ...
	$(CC) $(CFLAGS) $(LIBFLAGS) -l $(NAMELIBFT) $(OBJ_MAIN) $(LIBFT) -o $@

$(LIBFT): $(OBJS_FT) $(INCS_FT)
	@echo Compiling Librery: $@ ...
	mkdir -p lib
	$(AR) $@ $^

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_FT)
	@echo Compiling Main File: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

%.o: %.c $(INCS_FT)
	@echo Compiling Objects Files: $@ ...
	$(CC) -c $< $(CFLAGS) $(INCFLAGS) -o $@

clean:
	@echo Delete Objects Files: $@ ...
	$(RM) $(OBJS_FT) $(OBJ_MAIN)

fclean: clean
	@echo Library and Binary Files: $@ ...
	$(RM) $(LIBFT) $(NAME)

re: fclean all

dbg:	CFLAGS += -O0 -g
dbg:	RULE = dbg
dbg:	re
