/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:47:39 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:35:49 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sort_arr_mean(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr[size / 2]);
}

int	ft_make_sort_arr(t_list *stack)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_lstsize(stack);
	i = 0;
	arr = (int *)ft_calloc(size, sizeof(int));
	if (!arr)
		ft_error();
	while (stack && i < size)
	{
		arr[i++] = stack->content;
		stack = stack->next;
	}
	i = ft_sort_arr_mean(arr, size);
	free(arr);
	return (i);
}
