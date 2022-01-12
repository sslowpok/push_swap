/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:01 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/17 16:58:02 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int			start;
	int			i;
	int			end;
	char		*out;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strchr(set, s1[end]) && (end > start))
		end--;
	out = (char *)malloc(end - start + 2);
	if (!out)
		return (NULL);
	while (start <= end)
		out[i++] = s1[start++];
	out[i] = '\0';
	return (out);
}
