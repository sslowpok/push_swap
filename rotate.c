/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:29:05 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 16:54:17 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **stack_a, int flag)
{
	t_list	*tmp;
	int		temp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	temp = tmp->content;
	while (tmp->next)
	{
		tmp->content = tmp->next->content;
		tmp = tmp->next;
	}
	ft_lstlast(tmp)->content = temp;
	if (flag)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list **stack_b, int flag)
{
	t_list	*tmp;
	int		temp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	temp = tmp->content;
	while (tmp->next)
	{
		tmp->content = tmp->next->content;
		tmp = tmp->next;
	}
	ft_lstlast(tmp)->content = temp;
	if (flag)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
}