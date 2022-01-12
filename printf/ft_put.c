/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:53:27 by sslowpok          #+#    #+#             */
/*   Updated: 2021/11/26 14:29:20 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		count;
	char	*nbr;

	count = 0;
	nbr = ft_itoa(n);
	count = ft_putstr(nbr);
	free(nbr);
	return (count);
}

int	ft_print_unsigned_nbr(unsigned int n)
{
	int		count;
	char	*nbr;

	count = 0;
	nbr = ft_utoa(n);
	count = ft_putstr(nbr);
	free(nbr);
	return (count);
}

int	ft_print_pointer(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = ft_print_pointer(n / 16, base);
	count++;
	ft_putchar(base[n % 16]);
	n /= 16;
	return (count);
}
