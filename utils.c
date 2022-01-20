/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:24:56 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/20 17:17:10 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ft_atoi_long(const char	*nptr)
{
	char				*str;
	long long int		i;
	long long int		sign;
	long long int		res;

	str = (char *) nptr;
	i = 0;
	res = 0;
	sign = 1;
	while (str + i && (*(str + i) == '\n' || *(str + i) == '\t'
			|| *(str + i) == '\v' || *(str + i) == '\f' || *(str + i) == '\r'
			|| *(str + i) == ' '))
		i++;
	if (*(str + i) == '-')
		sign *= -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		res = res * 10 + (*(str + i) - 48);
		i++;
	}
	if (*(str + i))
		return (0);
	return (res * sign);
}

void	ft_print(t_list *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

int	ft_issorted(t_list *stack)
{
	int		size;
	t_list	*temp;

	temp = stack;
	size = ft_lstsize(temp);
	if (!stack || !stack->next)
		return (0);
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_max(t_list *stack)
{
	int	max;

	max = INT_MIN;
	if (!stack)
		return (0);
	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

int	ft_min(t_list *stack)
{
	int	min;

	min = INT_MIN;
	if (!stack)
		return (0);
	min = stack->content;
	while (stack)
	{
		if (stack->content > min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}
