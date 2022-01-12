# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 14:49:43 by sslowpok          #+#    #+#              #
#    Updated: 2021/10/21 16:39:51 by sslowpok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_memmove.c \
			ft_calloc.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_split.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

NAME		= libft.a

OBJS		= ${SRCS:.c=.o}
OBJ_BONUS 	= ${BONUS:.c=.o}

AR			= ar rcs
RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror


all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

%.o:		%.c libft.h
			${CC} ${CFLAGS} -c $< -o $(<:.c=.o)


bonus:		${NAME}	${OBJS} ${OBJ_BONUS}
			@touch bonus
			${AR} ${NAME} ${OBJ_BONUS}

clean:
			${RM} ${OBJS} ${OBJ_BONUS}
			@$(RM) bonus

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
