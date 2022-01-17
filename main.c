/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:59 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/17 18:10:01 by alex             ###   ########.fr       */
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
		ft_error();
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
	// нужно защищать маллок
	//ft_init_stacks(stack_a, stack_b);
	ft_validation(argc, argv);
	while (i < argc)
		ft_stack_fill(argv[i++], &stack_a);
	if (ft_issorted(stack_a))
		exit(EXIT_SUCCESS);
	i = ft_lstsize(stack_a);
	ft_minisort(&stack_a, &stack_b, i);
	ft_print(stack_a);
	return (0);
}