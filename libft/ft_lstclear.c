/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:57:05 by sslowpok          #+#    #+#             */
/*   Updated: 2021/10/17 15:03:49 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		if (ptr->content)
			del(ptr->content);
		free(ptr);
	}
}
