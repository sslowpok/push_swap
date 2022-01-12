/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:11:24 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/21 17:43:33 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	out = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!out)
		return (0);
	while (s1[i])
	{
		out[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		out[j++] = s2[i++];
	}
	out[j] = '\0';
	return (out);
}
