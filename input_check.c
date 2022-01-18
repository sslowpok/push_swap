/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:03:37 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/18 18:26:29 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
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

int	ft_check_arg(char *str)
{
	long long int	i;
	long long int	temp;

	if (!*str)
		return (1);
	i = 0;
	while (*(str + i))
	{
		if (!ft_isdigit(*(str + i)) && *(str + i) != '-')
			return (1);
		i++;
	}
	temp = ft_atoi_long(str);
	if (temp == 0)
		return (1);
	else if (temp < INT_MIN || temp > INT_MAX)
		return (1);	
	return (0);
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

void	ft_validation(int argc, char **argv, t_list **stack_a)
{
	int		i;

	if (argc < 3)
	{
		ft_error();
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_check_arg(argv[i++]) == 1)
				ft_error();
		}
		ft_check_duplication(argc, argv);
		i = 1;
		while (i < argc)
			ft_stack_fill(argv[i++], stack_a);
	}
}
