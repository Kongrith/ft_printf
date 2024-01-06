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

#include "ft_printf.h"

static int	print_ptr(char *hex, int digit)
{
	int	i;
	int	length;

	write(1, "0x", 2);
	length = 0;
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
	return (length);
}

int	ft_printptr(void *ptr)
{
	unsigned long	dec;
	int				length;
	int				digit;
	char			*hex;

	if (ptr == NULL || ((void *)0))
	{
		write(1, "(nil)", 5);
		return (5);
	}
	dec = (unsigned long)ptr;
	digit = count_digit_lu(dec);
	hex = dec2hex(dec, digit, 'p');
	length = print_ptr(hex, digit);
	free(hex);
	return (length + 2);
}
