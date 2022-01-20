/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:32:56 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/20 13:50:06 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack_a, int flag)
{
	int	temp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	temp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = temp;
	if (flag)
		ft_putendl_fd("sa", 1);
	// 	// ------------
	// ft_printf("a:\n");
	// ft_print(*stack_a);
}

void	ft_sb(t_list **stack_b, int flag)
{
	int	temp;
	
	if (!*stack_b || !(*stack_b)->next)
		return ;
	temp = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = temp;
	if (flag)
		ft_putendl_fd("sb", 1);
	// 	// ------------
	// ft_printf("b:\n");
	// ft_print(*stack_b);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	ft_putendl_fd("ss", 1);
}