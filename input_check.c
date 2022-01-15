/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:03:37 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 16:00:37 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error. Stop\n");
	exit (EXIT_FAILURE);
}

static void	ft_check_arg(char *str)
{
	long long int	i;
	long long int	temp;

	if (!*str)
		ft_error();
	i = 0;
	while (*(str + i))
	{
		if (!ft_isdigit(*(str + i)) && *(str + i) != '-')
			ft_error();
		i++;
	}
	temp = ft_atoi_long(str);
	if (temp < INT_MIN || temp > INT_MAX)
		ft_error();
}

static void	ft_check_duplication(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_validation(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		ft_error();
	i = 1;
	while (i < argc)
		ft_check_arg(argv[i++]);
	ft_check_duplication(argc, argv);
}

void	ft_stack_fill(char *str, t_list **stack)
{
	t_list	*temp;
	
	if (!stack)
		*stack = ft_lstnew(ft_atoi(str));
	else
	{
		temp = ft_lstnew(ft_atoi(str));
		ft_lstadd_back(stack, temp);
	}
}