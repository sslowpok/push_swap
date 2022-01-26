/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_long_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:27:46 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_pa(t_list **a, t_list **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != ft_max_index(b) && \
				!ft_compare_positions(b, ft_max_index(b), ft_lstsize(*b)))
			ft_rb(b, 1);
		else if ((*b)->index != ft_max_index(b) && \
				ft_compare_positions(b, ft_max_index(b), ft_lstsize(*b)))
			ft_rrb(b, 1);
		else if ((*b)->index == ft_max_index(b))
			ft_pa(a, b);
	}
}

static void	ft_sort_100(t_list **a, t_list **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			ft_pb(a, b);
			l++;
			ft_rb(b, 1);
		}
		else if ((*a)->index <= l + 15)
		{
			ft_pb(a, b);
			l++;
		}
		else if ((*a)->index >= l)
		{
			ft_ra(a, 1);
		}
	}
	ft_sort_pa(a, b);
}

static void	ft_sort_500(t_list **a, t_list **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			ft_pb(a, b);
			l++;
			ft_rb(b, 1);
		}
		else if ((*a)->index <= l + 30)
		{
			ft_pb(a, b);
			l++;
		}
		else if ((*a)->index >= l)
		{
			ft_ra(a, 1);
		}
	}
	ft_sort_pa(a, b);
}

void	ft_new_long_sort(t_list **a, t_list **b)
{
	ft_index(a);
	if (ft_lstsize(*a) <= 100)
		ft_sort_100(a, b);
	else
		ft_sort_500(a, b);
}
