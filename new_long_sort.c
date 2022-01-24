/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_long_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/24 20:25:56 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_midpoint(t_list **stack_a, t_list **stack_b)
{
	int	mean;
	int	count;
	int	i;

	mean = ft_make_sort_arr(*stack_a);
	count = ft_lstsize(*stack_a) / 2;
	i = 0;
	while (i < count)
	{
		if ((*stack_a)->content < mean)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_ra(stack_a, 1);
	}
	
}

static void	ft_push_b(t_list **stack_a, t_list **stack_b, int *chunk)
{
	if (*chunk > 1)
	{
		ft_midpoint(stack_a, stack_b);
		*chunk /= 2;
		ft_push_b(stack_a, stack_b, chunk);
	}
		
//	what to do with chunk variable......
}

static void	ft_push_a(t_list **stack_a, t_list **stack_b, int *chunk)
{
	int	i;

	i = 0;
	while (i < chunk)
	{
		
		i++;
	}


	
	*chunk *= 2;
}




void	new_ft_long_sort(t_list **stack_a, t_list **stack_b)
{

	int	chunk;

	chunk = ft_lstsize(*stack_a) / 2;

	ft_push_b(stack_a, stack_b, &chunk);
	chunk += 2;
	
	if (!ft_issorted(*stack_a))
		ft_sort3(stack_a);

	printf("\na after push to b:\n");
	ft_print(*stack_a);
	
	printf("\nb after push to b:\n");
	ft_print(*stack_b);
}