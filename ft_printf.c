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

static	int	format_specifier(va_list args, const char format, int count)
{
	if (format == 'c')
		return (ft_printchar(args, count));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_printptr(va_arg(args, void *)));
	else if (format == 'd')
		return (ft_printdec(args, count));
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
	int		i;
	int		count;
	int		print_length;
	va_list	args;

	i = 0;
	count = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			print_length += format_specifier(args, str[i + 1], ++count);
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
