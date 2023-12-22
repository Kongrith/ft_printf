/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:59:20 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:20:31 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char a = 'a';
    printf("test %c  : %d %d \n", a, isascii(a), ft_isascii(a));
	int  b = 5;
	printf("test %d  : %d %d \n", b, isascii(b), ft_isascii(b));
	char c = 0x80;
	printf("test %c  : %d %d \n", c, isascii(c), ft_isascii(c));
	char  d = 0x7c ;
	printf("test %c  : %d %d \n", d, isascii(d), ft_isascii(d));
	char  e = '5';
	printf("test '%c': %d %d \n", e, isascii(e), ft_isascii(e));
}*/
