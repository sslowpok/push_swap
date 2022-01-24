/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_long_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/24 15:17:13 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_b(t_list **stack_a, t_list **stack_b, int min, int max, int mean)
{
	t_list	*temp;

	temp = *stack_a;
	
	

	
}


void	new_ft_long_sort(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;
	int	mean;

	min = ft_min(*stack_a);
	max = ft_max(*stack_a);
	mean = ft_make_sort_arr(*stack_a);
}