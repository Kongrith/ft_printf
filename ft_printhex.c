/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:26:20 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:17:04 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define ISUNSIGNED(num) (num >= 0 && ~num >= 0)

static char *reverse_hex(char *hex, int digit)
{
    int start;
    int end;
    int tmp;

    start = 0;
    end = digit - 1;
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

static int count_digit(unsigned int n)
{
    int digit;
    unsigned int num;

    digit = 0;
    num = n;
    if (n == 0)
        return (1);

    while (num != 0)
    {
        digit += 1;
        num /= 16;
    }
    return (digit);
}

static char *dec2hex(unsigned long dec, int digit, const char format)
{
    int i;
    int remainder;
    char *hex;

    hex = (char *)malloc((digit + 1) * sizeof(char));
    i = 0;
    while (dec != 0)
    {
        remainder = dec % 16;
        if (remainder < 10)
            remainder += '0';
        else
        {
            if (format == 'x')
                remainder += 'W';
            else
                remainder += '7';
        }

        hex[i] = remainder;
        dec /= 16;
        i++;
    }
    hex[i] = '\0';
    hex = reverse_hex(hex, digit);
    return (hex);
}

int ft_printhex(int a, const char format)
{
    int length;
    int i;
    int digit;
    char *hex;
    unsigned int dec;

    dec = (unsigned int)a;

    if (dec == 0)
    {
        write(1, "0", 1);
        return (1);
    }

    length = 0;
    digit = count_digit(dec);
    hex = dec2hex(dec, digit, format);
    i = 0;
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
    return (length);
}