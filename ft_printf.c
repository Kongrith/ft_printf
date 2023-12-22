/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 03:28:32 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/22 04:25:14 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(int n, ...)
{
	int	sum;
	va_list ptr;			// declar pointer to argument list
	va_start(ptr, n);	//
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",va_arg(ptr, int));
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
/*
int	main()
{
	printf("%c\n", ft_printf(1, 2, 3));
	return(0);
}*/
