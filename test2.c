/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:08:51 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/22 04:23:19 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <string.h>
int main()
{
	/*
	ft_putchar_fd('a', 1);
	printf("\n");
	*/

	char	buf[10] = "cspdiuxX%";
	char	str[] = "%ccdefghi";
	char	*ptr;
	int	ch = 'a';
	int	i;
	i = 0;
	/*
	ptr = ft_strchr(buf, ch);
	printf("%c\n", ptr[0]);
	*/
	if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i+1]))
		printf("Found\n");
	else
		printf("NotFound\n");
	/*
	ft_printf("%d bangkok", 42);
	printf("\n");
	ft_printf("%c", '5');
	printf("\n");
	*/
	return (0);
}
