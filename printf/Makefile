# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 14:28:29 by sslowpok          #+#    #+#              #
#    Updated: 2021/11/26 14:28:30 by sslowpok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

AR = ar -rc

RM = rm -rf

SRCS = ft_printf.c \
		ft_put.c \
		utils.c \
		ft_hexadecimal.c

HEADER = ft_printf.h

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
		$(AR) $(NAME) $(OBJS)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:	 clean
		$(RM) $(NAME)

re:		 fclean all

.PHONY: clean fclean all re