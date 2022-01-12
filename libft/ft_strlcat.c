/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:24:28 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/10 14:20:40 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	j = ft_strlen(dst);
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size + i < dstsize - 1 && dstsize > 0)
	{
		while (j < dstsize - 1 && src[i])
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dst_size > dstsize)
		dst_size = dstsize;
	return (dst_size + src_size);
}
