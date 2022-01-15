/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:32:56 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 15:39:10 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list *stack_a)
{
	int	temp;

	temp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp;
}