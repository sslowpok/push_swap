/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:53:44 by alex              #+#    #+#             */
/*   Updated: 2022/01/18 15:50:37 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_to_b(t_list **stack_a, t_list **stack_b)
{
	int	mean;
	int	half;

	while (ft_lstsize(*stack_a) > 2)
	{
		half = ft_lstsize(*stack_a) / 2;
		mean = ft_make_sort_arr(*stack_a);
		// if ((*stack_a)->content > (*stack_a)->next->content)
		// 	ft_sa(stack_a, 1);
		while (half > 0)
		{
			if ((*stack_a)->content < mean)
			{
				ft_pb(stack_a, stack_b);
				half--;
				// if ((*stack_a)->content > (*stack_a)->next->content)
				// 	ft_sa(stack_a, 1);
			}
			else
			ft_ra(stack_a, 1);
		}
	}
	if (!ft_issorted(*stack_a))
		ft_ra(stack_a, 1);
}

static void	ft_push_to_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*temp;

	while (*stack_b)
	{
		i = 0;
		temp = *stack_b;
		while (temp->content != ft_max(temp))
		{
			i++;
			temp = temp->next;
		}
		if (i < ft_lstsize(*stack_b) / 2)
		{
			while (i--)
				ft_rb(stack_b, 1);
		}
		else
			while (i++ != ft_lstsize(*stack_b))
				ft_rrb(stack_b, 1);
		ft_pa(stack_a, stack_b);
	}
	//if (stack_b)
		//free(stack_b);
}

void	ft_long_sort(t_list **stack_a, t_list **stack_b)
{
	ft_push_to_b(stack_a, stack_b);
	ft_push_to_a(stack_a, stack_b);
}