/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:53:44 by alex              #+#    #+#             */
/*   Updated: 2022/01/23 18:36:13 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push_to_b(t_list **stack_a, t_list **stack_b)
{
	int	mean;
	int	min;
	int	max;
	int	size;

	min = ft_min(*stack_a);
	max = ft_max(*stack_a);
	mean = ft_make_sort_arr(*stack_a);
	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		if ((*stack_a)->content != min && (*stack_a)->content != max && \
			(*stack_a)->content != mean)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b, 1);
			size--;
		}
		else
			ft_ra(stack_a, 1);
	}
		ft_sort3(stack_a);
		// ft_ra(stack_a, 1);
	return (mean);
}

static void	ft_push_to_a_1(t_list **stack_a, t_list **stack_b, int mean)
{
	int		i;
	int		size;
	t_list	*temp;

	ft_rra(stack_a, 1);
	size = ft_lstsize(*stack_b);
	// ft_print(*stack_a);
	
	// while (i < size)
	// {
	// 	position = 0;
	// 	temp = *stack_b;
	// 	while (temp->content != ft_max(temp))
	// 	{
	// 		temp = temp->next;
	// 		position++;
	// 	}	
	// 	if (position < size / 2)
	// 	{
	// 		while (i--)
	// 			ft_rb(stack_b, 1);
	// 	}
	// 	else
	// 		while (i++ < size)
	// 			ft_rrb(stack_b, 1);
	// 	i++;
	// 	ft_pa(stack_a, stack_b);
	// }
	while (size > 0)
	{
		temp = *stack_b;
		i = 0;
		while (temp->content != ft_max(*stack_b))
		{
			temp = temp->next;
			i++;
		}
		if (i < size / 2)
			while (i-- > 0)
				ft_rb(stack_b, 1);
		else
			while (i++ < size)
				ft_rrb(stack_b, 1);
		if ((*stack_b)->content < mean)
		{
			ft_rra(stack_a, 1);
			break ;
		}
		ft_pa(stack_a, stack_b);
		size--;
	}
}

static void	ft_push_to_a_2(t_list **stack_a, t_list **stack_b, __unused int mean)
{
	int	i;
	int	size;
	t_list	*temp;

	size = ft_lstsize(*stack_b);

	while (size > 0)
	{
		i = 0;
		temp = *stack_b;
		while (temp->content != ft_max(*stack_b))
		{
			temp = temp->next;
			i++;
		}
		if (i < size / 2)
			while (i-- > 0)
				ft_rb(stack_b, 1);
		else
			while (i++ < size)
				ft_rrb(stack_b, 1);
		ft_pa(stack_a, stack_b);
		size--;
	}
	ft_rra(stack_a, 1);
}

// static void	ft_push_third(t_list **stack_a, t_list **stack_b)
// {
// 	int	i;
// 	int	size;
	
// 	printf("3rd ft:\n");
// 	i = 0;
// 	size = ft_lstsize(*stack_b);
// 	while (i < size)
// 	{
// 		if ((*stack_b)->content > (*stack_b)->next->content)
// 		{
// 			ft_rb(stack_b, 1);
// 		}
// 		else
// 		ft_pa(stack_a, stack_b);
// 		i++;
// 	}
// 	ft_pa(stack_a, stack_b);
// }

// static void	ft_final_rotate(t_list **stack_a)
// {
// 	while (!ft_issorted(*stack_a))
// 		ft_rra(stack_a, 1);
// }

void	ft_long_sort(t_list **stack_a, t_list **stack_b)
{
	int	mean;
	
	mean = ft_push_to_b(stack_a, stack_b);
	
	// printf("\na:\n");
	// ft_print(*stack_a);
	// printf("\nb:\n");
	// ft_print(*stack_b);
	
	ft_push_to_a_1(stack_a, stack_b, mean);

	// printf("\na:\n");
	// ft_print(*stack_a);
	// printf("\nb:\n");
	// ft_print(*stack_b);


	ft_push_to_a_2(stack_a, stack_b, mean);
	
	// printf("\na:\n");
	// ft_print(*stack_a);
	// printf("\nb:\n");
	// ft_print(*stack_b);
}
