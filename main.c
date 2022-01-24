/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:59 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/24 19:43:17 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	ft_validation(argc, argv, &stack_a);
	if (ft_issorted(stack_a))
		exit(EXIT_SUCCESS);
	i = ft_lstsize(stack_a);
	if (i < 6)
		ft_minisort(&stack_a, &stack_b, i);
	else
		new_ft_long_sort(&stack_a, &stack_b);
	//printf("\na:\n");	
	//ft_print(stack_a);
	if (stack_a)
		ft_lstclear(&stack_a, del);
	if (stack_b)
		ft_lstclear(&stack_b, del);
	return (0);
}
