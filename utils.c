/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:24:56 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 15:43:52 by sslowpok         ###   ########.fr       */
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
	return (res * sign);
}

void	ft_print_a(t_list *stack_a)
{
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
}