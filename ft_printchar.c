/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:23:09 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:24:16 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(va_list args, int count)
{
	int	c;
	int	i;

	i = 0;
	while (i != count)
	{
		c = va_arg(args, int);
		i++;
	}
	write(1, &c, 1);
	return (1);
}
