/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:58:40 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/10 12:47:29 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *) mem)[i] = '\0';
		i++;
	}
	return (mem);
}
