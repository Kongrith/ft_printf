/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:11:05 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:23:33 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int count_dec_digit(int n)
{
    int digit;
    int num;

    digit = 0;
    num = n;
    if (n < 0)
    {
        n = n * -1;
        digit++;
    }
    else if (n == 0)
        return (1);

    while (num != 0)
    {
        digit += 1;
        num /= 10;
    }
    return (digit);
}

// int count_hex_digit(unsigned int n)
// {
//     int digit;
//     unsigned int num;

//     digit = 0;
//     num = n;
//     if (n == 0)
//         return (1);

//     while (num != 0)
//     {
//         digit += 1;
//         num /= 16;
//     }
//     return (digit);
// }

int count_digit_lu(unsigned long n)
{
    int digit;
    unsigned long num;

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

int count_uint_digit(unsigned int u)
{
    int digit;
    unsigned int num;

    digit = 0;
    num = u;
    if (u == 0)
        return (1);

    while (num != 0)
    {
        digit += 1;
        num /= 10;
    }
    return (digit);
}

int count_hex_digit(unsigned int n)
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

char *reverse_hex(char *hex, int digit)
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

// static char *reverse_hex(char *hex)
// {
// 	int start;
// 	int end;
// 	int tmp;

// 	start = 0;
// 	end = 11;
// 	while (start < end)
// 	{
// 		tmp = hex[start];
// 		hex[start] = hex[end];
// 		hex[end] = tmp;
// 		start++;
// 		end--;
// 	}
// 	return (hex);
// }

char *dec2hex(unsigned long dec, int digit, const char format)
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
            if ((format == 'x') || (format == 'p'))
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

// static char *dec2hex(unsigned long dec)
// {
// 	int i;
// 	int remainder;
// 	char *hex;
// 	int digit;

// 	digit = 12;
// 	hex = (char *)malloc((digit + 1) * sizeof(char));
// 	i = 0;
// 	while (dec != 0)
// 	{
// 		remainder = dec % 16;
// 		if (remainder < 10)
// 			remainder += '0';
// 		else
// 			remainder += 'W';
// 		hex[i] = remainder;
// 		dec /= 16;
// 		i++;
// 	}
// 	hex[i] = '\0';
// 	hex = reverse_hex(hex, digit);
// 	return (hex);
// }
