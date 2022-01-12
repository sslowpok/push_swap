/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:02:11 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/17 20:20:31 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	if (!i)
		return (1);
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	numb;
	char		*out;

	numb = (long int)n;
	len = ft_len(numb);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	if (numb < 0)
	{
		out[0] = '-';
		numb = -numb;
	}
	else if (!numb)
		out[0] = '0';
	out[len] = '\0';
	while (numb)
	{
		out[--len] = (numb % 10) + '0';
		numb /= 10;
	}
	return (out);
}
