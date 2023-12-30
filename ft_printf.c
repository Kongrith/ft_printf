/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 03:28:32 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/30 22:48:30 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int format_specifier(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length = ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length = ft_printptr(va_arg(args, void *));
	else if (format == 'd')
		print_length = ft_printdecimal(va_arg(args, void *));
	else
		print_length = -1;	
	return (print_length);
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
			print_length = format_specifier(args, str[i + 1]);
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
