/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:11 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/26 16:35:22 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

long long int	ft_atoi_long(const char	*nptr);
void			ft_validation(int argc, char **argv, t_list **stack_a);
void			ft_print(t_list *stack);
void			ft_stack_fill(char *str, t_list **stack);
void			ft_sa(t_list **stack_a, int flag);
void			ft_sb(t_list **stack_b, int flag);
void			ft_ss(t_list **stack_a, t_list **stack_b);
void			ft_pa(t_list **stack_a, t_list **stack_b);
void			ft_pb(t_list **stack_a, t_list **stack_b);
void			ft_ra(t_list **stack_a, int flag);
void			ft_rb(t_list **stack_b, int flag);
void			ft_rr(t_list **stack_a, t_list **stack_b);
void			ft_rra(t_list **stack_a, int flag);
void			ft_rrb(t_list **stack_b, int flag);
void			ft_rrr(t_list **stack_a, t_list **stack_b);
void			ft_error(void);
int				ft_issorted(t_list *stack);
int				ft_max(t_list *stack);
int				ft_min(t_list *stack);
void			ft_minisort(t_list **stack_a, t_list **stack_b, int size);
int				ft_make_sort_arr(t_list *stack);
void			ft_long_sort(t_list **stack_a, t_list **stack_b);
void			del(int content, int index);
void			ft_check_split_arg(char *arg, t_list **a);
int				ft_check_arg(char *str);
void			ft_sort3(t_list **stack_a);

int				*ft_sort_int_arr(int *arr, int size);
int				*ft_make_index_arr(t_list *b, int *num);
int				ft_compare_positions(t_list **a, int med, int pos);

int				*ft_make_int_arr(t_list *stack);
int				*ft_sort_arr(t_list *stack);
int				ft_find_index(int not_sorted, int *sorted);
void			ft_index(t_list **stack);
int				ft_max_index(t_list **stack);
void			ft_new_long_sort(t_list **a, t_list **b);

#endif