/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:11:05 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:23:33 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_specifier(va_list args, const char format)
{
	if (format == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_printptr(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_printdec(va_arg(args, int)));
	else if (format == 'u')
		return (ft_printuint(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_printhex(va_arg(args, unsigned int), format));
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			print_length += format_specifier(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			print_length += 1;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
