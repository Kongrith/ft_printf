/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 03:28:32 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/01 23:43:37 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int format_specifier(va_list args, const char format)
{
	if (format == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_printptr(va_arg(args, void *)));
	else if (format == 'd')
		return (ft_printdec(va_arg(args, int)));
	else if (format == '%')
		return (ft_printchar('%'));
	else
		return (-1);	
}

int ft_printf(const char *str, ...)
{
	int i;
	int print_length;
	va_list args;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			print_length += format_specifier(args, *(str + i + 1));
			i++;
		}
		else
		{
			ft_putchar_fd(*(str + i), 1);
			print_length += 1;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
