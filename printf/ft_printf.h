/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:11:47 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/12 17:13:47 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_itoa(int n);
int		ft_printnbr(int n);
int		ft_printf(const char *s, ...);
char	*ft_utoa(unsigned int n);
int		ft_print_unsigned_nbr(unsigned int n);
int		ft_print_hex(unsigned int n, char *base);
int		ft_print_pointer(unsigned long n, char *base);

#endif