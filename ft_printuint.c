/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:11:05 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:23:33 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*  How Integer Numer Store in The Memoty Computer
the computer store data in the memory using the two’s complement method.
When the number was casted to an unsigned integer, the binary number was assumed as an unsigned binary number.

INT_MIN to INT_MIN = −2,147,483,648 to +2,147,483,647 (16/32/64 bits) size 4 bytes.
UINT_MAX           =                   +4,294,967,295 (16/32/64 bits) size 4 bytes.

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

void print_uint(unsigned int u)
{
    int fd;

    fd = 1;
    if (u >= 10)
    {
        print_uint(u / 10);
        ft_putchar_fd(u % 10 + '0', fd);
    }
    else
        ft_putchar_fd(u + '0', fd);
}

int ft_printuint(unsigned int u)
{
    int length;

    length = 0;
    length = count_uint_digit(u);
    print_uint(u);

    return (length);
}