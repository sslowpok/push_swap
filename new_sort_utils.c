/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:22:30 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:31:46 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_make_int_arr(t_list *stack)
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

int	*ft_sort_arr(t_list *stack)
{
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(stack);
	return (ft_sort_int_arr(ft_make_int_arr(stack), size));
}

int	ft_find_index(int not_sorted, int *sorted)
{
	int	i;

	i = 0;
	while (sorted[i] != not_sorted)
		i++;
	return (i);
}

void	ft_index(t_list **stack)
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
	free(arr_notsorted);
	free(arr_sorted);
}

int	ft_max_index(t_list **stack)
{
	int		i;
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
