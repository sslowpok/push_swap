/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:59 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 15:54:43 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

void	ft_init_stacks(t_list *stack_a, t_list *stack_b)
{
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
	{
		ft_printf("Malloc error. exit\n");
		exit (1);
	}
	stack_a->next = NULL;
	stack_b->next = NULL;
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	ft_init_stacks(stack_a, stack_b);
	ft_validation(argc, argv);
	while (i < argc)
		ft_stack_fill(argv[i++], &stack_a);

	
	// проверка на сортед
	ft_print_a(stack_a);
	return (0);
}