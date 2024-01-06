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

static void	print_uint(unsigned int u)
{
	int	fd;

	fd = 1;
	if (u >= 10)
	{
		print_uint(u / 10);
		ft_putchar_fd(u % 10 + '0', fd);
	}
	else
		ft_putchar_fd(u + '0', fd);
}

int	ft_printuint(unsigned int u)
{
	int	length;

	length = count_uint_digit(u, 10);
	print_uint(u);
	return (length);
}
