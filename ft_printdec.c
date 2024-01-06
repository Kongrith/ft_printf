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

int	ft_printdec(int n)
{
	int	length;

	length = 0;
	length = count_dec_digit(n);
	ft_putnbr_fd(n, 1);
	return (length);
}
