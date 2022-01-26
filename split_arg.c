/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:25:47 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 15:16:35 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(int content, int index)
{
	content = 0;
	index = 0;
}

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

static int	ft_split_arg_length(char **split_result)
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
	return (counter);
}

static void	ft_fill_split_arg(char **split_result, int length, t_list **a)
{
	int	i;

	i = 0;
	while (i < length)
	{
		ft_stack_fill(split_result[i], a);
		i++;
	}
	i = length - 1;
	while (i >= 0)
		free(split_result[i--]);
	free(split_result);
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
		i = 0;
	while (i < length)
	{
		if (ft_check_arg(split_result[i++]))
			ft_error();
	}
	if (length < 2)
		exit (EXIT_SUCCESS);
	ft_check_split_duplication(length, split_result);
	ft_fill_split_arg(split_result, length, a);
}
