/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_long_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/25 17:04:02 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_sort_int_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

static int	*ft_make_int_arr(t_list *stack)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(stack);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		ft_error();
	while (stack && i < size)
	{
		arr[i++] = stack->content;
		stack = stack->next;
	}
	return (arr);
}

static int	*ft_sort_arr(t_list *stack)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = ft_lstsize(stack);
	arr = ft_make_int_arr(stack);
	return (ft_sort_int_arr(arr, size));
}

static int	ft_find_index(int not_sorted, int *sorted)
{
	int	i;

	i = 0;
	while (sorted[i] != not_sorted)
		i++;
	return (i);
}

static void	ft_index(t_list **stack)
{
	t_list	*temp;
	int		*arr_sorted;
	int		*arr_notsorted;
	int		i;

	arr_notsorted = ft_make_int_arr(*stack);
	arr_sorted = ft_sort_arr(*stack);
	temp = *stack;
	i = 0;
	while (temp)
	{
		temp->index = ft_find_index(arr_notsorted[i], arr_sorted);
		temp = temp->next;
		i++;
	}
}


// static int ft_min_index(t_list **stack)
// {
// 	int	i;
// 	t_list	*temp;

// 	i = 0;
// 	temp = *stack;
// 	i = temp->index;
// 	while (temp)
// 	{
// 		if (i > temp->index)
// 			i = temp->index;
// 		temp = temp->next;
// 	}
// 	return (i);
// }

static int ft_max_index(t_list **stack)
{
	int	i;
	t_list	*temp;

	i = 0;
	temp = *stack;
	i = temp->index;
	while (temp)
	{
		if (i < temp->index)
			i = temp->index;
		temp = temp->next;
	}
	return (i);
}

static void	ft_sort_pa(t_list **a, t_list **b)
{
	while ((*b) != NULL)
	{
		printf("elem = %d, index = %d\n", (*b)->content, (*b)->index);
		if (!b)
			break;
		if ((*b)->index != ft_max_index(b))
		{
			printf("index = %d, size/2 = %d\n", (*b)->index, ft_lstsize(*b)/2);
			if ((*b)->index < ft_lstsize(*b) / 2)
					ft_rb(b, 1);
			else if ((*b)->index > ft_lstsize(*b) / 2)
					ft_rrb(b, 1);
		}
		else if ((*b)->index == ft_max_index(b))
			ft_pa(a, b);
	}
}

static void	ft_sort_100(t_list **a, t_list **b)
{
	int	l;

	ft_index(a);
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
			ft_ra(a, 1);
	}
	// while ((*b))
	// {
	// 	printf("elem = %d, index = %d\n", (*b)->content, (*b)->index);
	// 	(*b) = (*b)->next;
	// }
	ft_sort_pa(a, b);
}


void	ft_new_long_sort(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size <= 100)
		ft_sort_100(a, b);

	printf("\na after sort100:\n");
	ft_print(*a);
	printf("\nb after sort100:\n");
	ft_print(*b);
}