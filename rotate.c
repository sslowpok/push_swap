/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:29:05 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:29:33 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **stack_a, int flag)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	temp1 = *stack_a;
	temp2 = *stack_a;
	*stack_a = (*stack_a)->next;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp2;
	temp1->next->next = NULL;
	if (flag)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list **stack_b, int flag)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	temp1 = *stack_b;
	temp2 = *stack_b;
	*stack_b = (*stack_b)->next;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp2;
	temp1->next->next = NULL;
	if (flag)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
}
