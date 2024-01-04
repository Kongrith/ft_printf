/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:28:41 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/29 14:34:07 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memory address is in hexadecimal form, e.g.0x7ffe5367e044 (48 bit binary number)
which the bit of number depends on the specific hardware architecture.

int, long use 4 bytes.
long int uses 8 bytes.

*/

#include "ft_printf.h"

int ft_printptr(void *ptr)
{
	if (ptr == NULL || ((void *)0))
	{
		write(1, "(nil)", 5);
		return (5);
	}
	unsigned long dec;
	char *hex;
	int i;
	int length;
	// int digit;

	dec = (unsigned long)ptr;
	// hex = dec2hex(dec);
	// digit = count_digit_uint(dec);
	hex = dec2hex(dec, 12, 'p');
	i = 0;
	write(1, "0x", 2);
	while (i < 12)
	{
		if (hex[i] != '\0')
		{
			write(1, &hex[i], 1);
			length++;
		}
		++i;
	}

	free(hex);
	return (length + 2);
}
