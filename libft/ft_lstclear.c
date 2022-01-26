/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:57:05 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 15:17:34 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int, int))
{
	t_list	*ptr;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		if (ptr->content)
			del(ptr->content, ptr->index);
		free(ptr);
	}
}
