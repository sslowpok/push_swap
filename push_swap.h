/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:11 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 15:54:37 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

long long int	ft_atoi_long(const char	*nptr);
void			ft_validation(int argc, char **argv);
void			ft_print_a(t_list *stack_a);
void			ft_stack_fill(char *str, t_list **stack);


#endif