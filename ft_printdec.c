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

static int count_digit(int n)
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

int ft_printdec(int n)
{
	int length;

	length = 0;
	length = count_digit(n);
	ft_putnbr_fd(n, 1);

	return (length);
}