# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 23:07:08 by mmaria-g          #+#    #+#              #
#    Updated: 2024/11/28 23:17:57 by mmaria-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_putpointer.c \
		ft_putunsigned.c \
		ft_putchar.c \
		ft_printf.c \
		ft_putstr.c \
		ft_puthex.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_itoa.c \
		ft_strlen.c

OBJS	= ${SRCS:.c=.o}
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= printf.a

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re