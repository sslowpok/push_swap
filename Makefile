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
		long_sort_utils.c \
		split_arg.c \
		new_long_sort.c \
		new_sort_utils.c \
		new_sort_utils_2.c

LD_FLAGS =	-L libft

OBJS =	$(SRCS:.c=.o)

INC =	push_swap.h ./libft/libft.h

.PHONY: all clean fclean re makelib

all: makelib $(NAME) 

makelib:	
		@make -C ./libft
		@make bonus -C ./libft

$(NAME): $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) $(LD_FLAGS) ./libft/libft.a -o $(NAME)

%.o:	%.c push_swap.h libft/libft.h
		$(CC) $(CFLAGS)  -c $< -o $@

clean:	
		$(RM) $(OBJS)
		@make clean -C libft/
	
fclean:	clean
		$(RM) $(NAME)
		@make fclean -C libft/

re:		fclean all
