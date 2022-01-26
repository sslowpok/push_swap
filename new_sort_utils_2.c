/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sort_utils_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:24:52 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:27:54 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort_int_arr(int *arr, int size)
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

int	*ft_make_index_arr(t_list *b, int *num)
{
	int	d;

	if (!b || !num)
		return (0);
	d = 0;
	while (b)
	{
		num[d] = b->index;
		b = b->next;
		d++;
	}
	return (num);
}

int	ft_compare_positions(t_list **a, int med, int pos)
{
	int		z;
	int		*num;

	num = malloc(sizeof(int) * (pos + 1));
	if (!num)
		return (0);
	num = ft_make_index_arr(*a, num);
	z = pos;
	while (num[pos] != med)
		pos--;
	z = z - pos;
	pos = 0;
	while (num[pos] != med)
		pos++;
	free(num);
	if (z < pos)
		return (1);
	return (0);
}
