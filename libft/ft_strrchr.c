/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:07:19 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/17 19:14:00 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	*str;
	int				i;

	ptr = NULL;
	str = (unsigned char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			ptr = str + i;
		i++;
	}
	if (!(unsigned char)c)
		return ((char *)str + i);
	return ((char *)ptr);
}
