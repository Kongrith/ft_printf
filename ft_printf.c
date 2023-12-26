/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 03:28:32 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/22 04:25:14 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_formats(va_list args, const char format)
{
	// %d	writes a signed integer to decimal representation.
	if (format == 'c')
		ft_putchar_fd(va_arg(args, int), 1);

	return (va_arg(args, int));
}

int ft_printf(const char *str, ...)
{
	int i;
	int print_length;
	va_list args;
	va_start(args, str);

	i = 0;
	print_length = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			print_length = ft_formats(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			print_length += 1;
		}
		++i;
	}
	va_end(args);
	return (print_length);
}
