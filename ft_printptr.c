/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:28:41 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/29 14:34:07 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memory address is in hexadecimal form, e.g.0x7ffe5367e044 which the bit of number depends on the specific hardware architecture.

int, long use 4 bytes.
long int uses 8 bytes.

*/


#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	//int					length;
	unsigned long int	addr;

	addr = (unsigned long int) &ptr;
	//length = ft_strlen(addr);
	//write(1, addr, length);
	printf("%lu\n", addr);

	return (0);
}
