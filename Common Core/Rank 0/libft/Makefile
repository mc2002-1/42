NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs ./$(NAME) ./*.o

%.o: %.c includes/*.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re