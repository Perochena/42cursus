# Main program
NAME = libft.a
# Library libft.a
NAMELIBFT = ft
LIBFT = libft.a
INCS_FT = libft.h
SRCS_FT = $(shell find . -name "*.c")
OBJS_FT = $(SRCS_FT:.c=.o)
# Compile parameter
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(LIBFT)
	@echo Compiling Binary File: $@ ...
	@echo

$(LIBFT): $(OBJS_FT) $(INCS_FT)
	@echo Compiling FT Librery: $@ ...
	$(AR) $@ $^
	@echo

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_FT)
	@echo Compiling Main File: $@ ...
	#$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@
	$(CC) $(CFLAGS) -c $< -o $@
	@echo

%.o: %.c $(INCS_FT)
	@echo Compiling FT Objects Files: $@ ...
	#$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@
	$(CC) $(CFLAGS) -c $< -o $@
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
