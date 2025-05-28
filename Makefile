CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
CFILES = $(wildcard *.c)
OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# .PHONY: all clean fclean re
