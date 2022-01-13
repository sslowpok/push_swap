/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:03:37 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/13 16:15:38 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_arg(t_list *stack_a, int argc, char **argv)
{
	int	i;
	int	arg;

	i = 1;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "0", ft_strlen(argv[i])) != 0)
			if (ft_atoi(argv[i]) == 0)
			{
				ft_printf("%s is an invalid argument. stop\n", argv[i]);
				exit (1);
			}
		// нужен атои лонг
		arg = ft_atoi(argv[i++]);
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i++])));
		stack_a = stack_a->next;
	}
}
