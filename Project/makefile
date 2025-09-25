# ==== CONFIG ====
NAME    := libft.a
SRC     := $(wildcard *.c)
OBJ     := $(SRC:.c=.o)
CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs

# ==== RULES ====

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
