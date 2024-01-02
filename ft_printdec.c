/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:26:20 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:17:04 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printdec(va_list args, int count)
{
	int n;
	int i;
	int	length;

	i = 0;	
	while (i != count)
	{
		n = va_arg(args, int);
		i++;
	}

	length = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", 1);
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		ft_putnbr_fd(-n, 1);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putchar_fd(n % 10 + '0', 1);
	}
	else
		ft_putchar_fd(n + '0', 1);
	return (length);
}
