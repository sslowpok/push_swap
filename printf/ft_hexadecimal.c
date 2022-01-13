/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:01:00 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/13 16:11:40 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = ft_print_hex(n / 16, base);
	count++;
	ft_putchar(base[n % 16]);
	n /= 16;
	return (count);
}
