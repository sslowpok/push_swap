/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:26:17 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/20 17:44:39 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort3(t_list **stack_a)
{
	int	max;
	int	min;

	max = ft_max(*stack_a);
	min = ft_min(*stack_a);
	while (!ft_issorted(*stack_a))
	{
		if ((*stack_a)->content < (*stack_a)->next->content)
			ft_rra(stack_a, 1);
		else if ((*stack_a)->content == max \
			&& (*stack_a)->next->content == min)
			ft_ra(stack_a, 1);
		else
			ft_sa(stack_a, 1);
	}
}

static void	ft_search(t_list	**lst, int (*f)(t_list *))
{
	while ((*lst)->content != f(*lst))
	{
		if ((*lst)->next->content != f(*lst)
			&& (*lst)->next->next->content != f(*lst))
			ft_rra(lst, 1);
		else
			ft_ra(lst, 1);
	}
}

static void	ft_sort45(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 5)
	{
		ft_search(stack_a, ft_min);
		ft_pb(stack_a, stack_b);
	}
	ft_search(stack_a, ft_max);
	ft_pb(stack_a, stack_b);
	while (ft_lstsize(*stack_a) != 3)
		ft_pb(stack_a, stack_b);
	ft_sort3(stack_a);
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a, 1);
	if (size == 5)
		ft_pa(stack_a, stack_b);
	if (!ft_issorted(*stack_a))
		ft_ra(stack_a, 1);
}

void	ft_minisort(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		ft_sa(stack_a, 1);
	else if (size == 3)
		ft_sort3(stack_a);
	else
		ft_sort45(stack_a, stack_b, size);
}
