/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:11 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/12 19:53:36 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct	s_stack
{
	int	content;
	int	size;
	struct s_stack	*next;
}				t_stack;


# include <unistd.h>
# include <stdlib.h>

#endif