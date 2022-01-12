NAME =	push_swap

CC =	gcc
CFLAGS =	-Wall -Werror -Wextra

RM =	rm -rf

SRCS =	main.c \

INC =	libft/libft.h \
		printf/printf.h \
		push_swap.h

LD_FLAGS =	-L libft -L printf

OBJS =	$(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
			make -C ./libft
			make bonus -C ./libft
			make -C ./printf
			$(CC) $(CFLAGS) $(OBJS) $(LD_FLAGS) ./libft/libft.a ./printf/libftprintf.a -o $(NAME)

%.o:	%.c $(INC)
		$(CC) $(CFLAGS)  -c $< -o $@

clean:	
		$(RM) $(OBJS)
		make clean -C libft/
		make clean -C printf/
	
fclean:	clean
		$(RM) $(NAME)
		make fclean -C libft/
		make fclean -C printf/

re:		fclean all
