/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:50:41 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/12 19:07:49 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_2(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

//	нужна для печати unsigned
char	*ft_utoa(unsigned int n)
{
	int					len;
	char				*out;

	len = ft_len_2(n);
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	if (!n)
		out[0] = '0';
	out[len] = '\0';
	while (n)
	{
		out[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (out);
}
