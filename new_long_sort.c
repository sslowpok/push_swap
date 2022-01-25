/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_long_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/25 13:53:44 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	ft_max_chunk(t_list **stack, int chunk)
// {
// 	int	i;
// 	int	max;
// 	t_list	*temp;

// 	temp = *stack;
// 	max = temp->content;
// 	i = 0;
// 	while (i < chunk)
// 	{
// 		if (temp->content > max)
// 			max = temp->content;
// 		temp = temp->next;
// 		i++;
// 	}
// 	return (max);
// }

// static void	ft_midpoint_1(t_list **stack_a, t_list **stack_b)
// {
// 	int	mean;
// 	int	count;
// 	int	i;

// 	mean = ft_make_sort_arr(*stack_a);
// 	count = ft_lstsize(*stack_a) / 2;
// 	i = 0;
// 	while (i < count)
// 	{
// 		if ((*stack_a)->content < mean)
// 		{
// 			ft_pb(stack_a, stack_b);
// 			i++;
// 		}
// 		else
// 			ft_ra(stack_a, 1);
// 	}
	
// }

/*
**	pb all <= mean, else ra
*/
static void	ft_first_push_b(t_list **stack_a, t_list **stack_b)
{
	int	mean;
	int	size_a;
	int	i;

	i = 0;
	size_a = ft_lstsize(*stack_a);
	mean = ft_make_sort_arr(*stack_a);
	while (i < size_a)
	{
		if ((*stack_a)->content <= mean)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}

	printf("\na after push to b:\n");
	ft_print(*stack_a);
	
	printf("\nb after push to b:\n");
	ft_print(*stack_b);
//  ---------------------

	int	max;
	int	size_b;

	max = mean;
	mean = ft_make_sort_arr(*stack_b);
	size_b = ft_lstsize(*stack_b);
	i = 0;
	while (i < size_b)
	{
		if ((*stack_b)->content >= mean)
			ft_pa(stack_a, stack_b);
		else
			ft_rb(stack_b, 1);
		i++;
	}



}





void	new_ft_long_sort(t_list **stack_a, t_list **stack_b)
{

	
	ft_first_push_b(stack_a, stack_b);
	// ft_push_b(stack_a, stack_b);
	// if (!ft_issorted(*stack_a))
	// 	ft_sort3(stack_a);

	printf("\na after push to b:\n");
	ft_print(*stack_a);
	
	printf("\nb after push to b:\n");
	ft_print(*stack_b);

	// printf("max in chunk 1 = %d\n", ft_max_chunk(stack_b, 3));
}