/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:11:33 by sslowpok          #+#    #+#             */
/*   Updated: 2021/11/26 14:52:23 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_identify(char c, va_list argptr)
{
	if (c == 'c')
		return (ft_putchar(va_arg(argptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(argptr, char *)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (2 + ft_print_pointer(va_arg(argptr, unsigned long),
				"0123456789abcdef"));
	}
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(argptr, int)));
	else if (c == 'u')
		return (ft_print_unsigned_nbr(va_arg(argptr, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(argptr, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_print_hex(va_arg(argptr, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_parse(const char *s, va_list argptr)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += ft_identify(*s, argptr);
		}
		else
		{
			ft_putchar(*s);
			count++;
		}
		s++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	argptr;
	int		count;

	va_start(argptr, s);
	count = ft_parse(s, argptr);
	va_end(argptr);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		d = -1;
// 	int		k;

// 	k = printf("%d");
// 	printf("k = %d\n", k);
// 	// k = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
// 	// printf("my k = %d\n", k);
// 	return (0);
// }
