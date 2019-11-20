# Main program
NAME = libft.a
# Library libft.a
NAMELIBFT = ft
LIBFT = libft.a
LIBFTSO = libft.so
INCS_FT = libft.h
SRCS_FT = $(shell find . -name "*.c" ! -name "*_bonus.c")
OBJS_FT = $(SRCS_FT:.c=.o)
# Bonus
SRCS_Bonus = $(shell find . -name "*_bonus.c")
# Compile parameter
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(LIBFT) $(LIBFTSO)
	@echo Compiling Binary File: $@ ...
	@echo

$(LIBFT): $(OBJS_FT) $(INCS_FT)
	@echo Compiling FT Librery: $@ ...
	$(AR) $@ $^
	@echo

$(LIBFTSO): $(OBJS_FT) $(INCS_FT)
	@echo Compiling FT Librery SO: $@ ...
	$(AR) $@ $^
	@echo

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_FT)
	@echo Compiling Main File: $@ ...
	$(CC) $(CFLAGS) -c $< -o $@
	@echo

%.o: %.c $(INCS_FT)
	@echo Compiling FT Objects Files: $@ ...
	$(CC) $(CFLAGS) -c $< -o $@
	@echo

bonus: 
	@echo Compiling Bonus Objects Files: $@ ...

clean:
	@echo Delete Objects Files: $@ ...
	$(RM) $(OBJS_FT) $(OBJ_MAIN)
	@echo

fclean: clean
	@echo Delete Library and Binary Files: $@ ...
	$(RM) $(LIBFT) $(LIBFTSO) $(NAME)
	@echo

re: fclean all
	@echo
