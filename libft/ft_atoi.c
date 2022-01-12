/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:20:09 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/17 19:44:51 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n' || \
	s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		num;
	int		sign;
	int		count_num;

	count_num = 0;
	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (count_num > 19 && sign == -1)
			return (0);
		if (count_num++ > 19)
			return (-1);
		num = num * 10 + str[i++] - '0';
	}
	return (sign * num);
}
