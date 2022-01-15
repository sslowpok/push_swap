NAME =	push_swap

CC =	gcc
CFLAGS =	-Wall -Werror -Wextra

RM =	rm -rf

SRCS =	main.c \
		input_check.c \
		utils.c \
		swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		mini_sort.c \

LD_FLAGS =	-L libft -L printf

OBJS =	$(SRCS:.c=.o)

INC =	push_swap.h ./libft/libft.h ./printf/ft_printf.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) ./libft/*.c ./printf/*.c
			@make -C ./libft
			@make bonus -C ./libft
			@make -C ./printf
			@$(CC) $(CFLAGS) $(OBJS) $(LD_FLAGS) ./libft/libft.a ./printf/libftprintf.a -o $(NAME)

%.o:	%.c */*.h push_swap.h
		$(CC) $(CFLAGS)  -c $< -o $@

clean:	
		$(RM) $(OBJS)
		@make clean -C libft/
		@make clean -C printf/
	
fclean:	clean
		$(RM) $(NAME)
		@make fclean -C libft/
		@make fclean -C printf/

re:		fclean all
