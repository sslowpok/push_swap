/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:55:58 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 17:10:13 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack_a, int flag)
{
	t_list	*tmp;
	int		i;
	int		size;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	size = ft_lstsize(tmp) - 1;
	i = 0;
	while (i < size)
	{
		ft_ra(stack_a, 0);
		i++;
	}
	if (flag)
		ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_list **stack_b, int flag)
{
	t_list	*tmp;
	int		i;
	int		size;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	size = ft_lstsize(tmp) - 1;
	i = 0;
	while (i < size)
	{
		ft_ra(stack_b, 0);
		i++;
	}
	if (flag)
		ft_putendl_fd("rra", 1);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	ft_putendl_fd("rrr", 1);
}