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
The memory address is in hexadecimal form, e.g.0x7ffe5367e044 which the bit of number depends on the specific hardware architecture.

int, long use 4 bytes.
long int uses 8 bytes.

*/

#include "ft_printf.h"

static char *reverse_hex(char *hex)
{
	int start;
	int end;
	int tmp;

	start = 0;
	end = 11;
	while (start < end)
	{
		tmp = hex[start];
		hex[start] = hex[end];
		hex[end] = tmp;
		start++;
		end--;
	}
	return (hex);
}

static char *dec2hex(unsigned long dec)
{
	int i;
	int remainder;
	char *hex;

	hex = (char *)malloc(13 * sizeof(char));
	i = 0;
	while (dec != 0)
	{
		remainder = dec % 16;
		if (remainder < 10)
			remainder += '0';
		else
			remainder += 'W';
		hex[i] = remainder;
		dec /= 16;
		i++;
	}
	hex[i] = '\0';
	hex = reverse_hex(hex);
	return (hex);
}

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

	dec = (unsigned long)ptr;
	hex = dec2hex(dec);
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
