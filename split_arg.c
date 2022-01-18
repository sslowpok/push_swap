/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:25:47 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/18 18:21:30 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_split_duplication(int length, char **split_result)
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (ft_atoi(split_result[i]) == ft_atoi(split_result[j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int	ft_split_arg_length(char **split_result)
{
	int		i;
	int		counter;
	
	i = 0;
	counter = 0;
	while (split_result[i])
	{
		counter++;
		i++;
	}
	free(split_result);
	return (counter);
}

void	ft_check_split_arg(char *arg, t_list **a)
{
	char	**split_result;
	int		i;
	int		length;

	split_result = ft_split(arg, ' ');
	if (!split_result)
		ft_error();
	length = ft_split_arg_length(split_result);
	if (length < 2)
		ft_error();
	else
	{
		i = 0;
		while (i < length)
		{
			if (ft_check_arg(split_result[i]))
				ft_error();
		}
		ft_check_split_duplication(length, split_result);
	}
	i = 0;
	while (i < length)
		ft_stack_fill(split_result[i++], a);
		
}