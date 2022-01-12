/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:59 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/12 20:02:21 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

void	ft_init_stacks(t_stack *stack_a, t_stack *stack_b)
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
	stack_a->size = 0;
	stack_b->size = 0;
}

int	main(int __unused argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 1;
	ft_init_stacks(stack_a, stack_b);
	while (i < argc)
	{
		// валидация аргов + запись в stack_a
		i++;
	}
	// определение размера а
	// если размер для минисорта - минисорт
	ft_printf("%s\n", argv[1]);
	return (0);
}