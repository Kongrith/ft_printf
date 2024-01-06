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
The memory address is in hexadecimal form, e.g.0x7ffe5367e044 (12bit hex/48bit binary number)
which the bit of number depends on the specific hardware architecture.

 < hex >            < binary >               <2's complement>          < unsigned int >
	...
00000001h   00000000000000000000000000000001         1       cast to             1
00000000h   00000000000000000000000000000000         0       cast to             0
FFFFFFFFh   11111111111111111111111111111111        -1       cast to    4,294,967,295
FFFFFFFEh   11111111111111111111111111111110        -2       cast to    4,294,967,294
	...
80000001h   10000000000000000000000000000001 -2,147,483,647  cast to    2,147,483,649
80000000h   10000000000000000000000000000000 -2,147,483,648  cast to    2,147,483,648
7FFFFFFFh   01111111111111111111111111111111  2,147,483,647  cast to    2,147,483,647
7FFFFFFEh   01111111111111111111111111111110  2,147,483,646  cast to    2,147,483,647
	...

src: https://en.wikibooks.org/wiki/C_Programming/limits.h

NOTES:
32bits utilize  8 digit hex
64bits utilize 16 digit hex

memory address utilize 12 digit hex (48 binary bit), e.g. 0x7ffe5367e044

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
	int digit;

	dec = (unsigned long)ptr;
	digit = count_digit_lu(dec);
	hex = dec2hex(dec, digit, 'p');
	i = 0;
	length = 0;
	write(1, "0x", 2);
	while (i < digit)
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
