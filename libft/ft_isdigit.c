/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:27:19 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:19:44 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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
	char a = '5';
    printf("test '5': %d %d \n", isdigit(a), ft_isdigit(a));
	int  b = 5;
	printf("test 5: %d %d \n", isdigit(b), ft_isdigit(b));
	char c = '-';
	printf("test '-': %d %d \n", isdigit(c), ft_isdigit(c));
	char  d = 's';
	printf("test 's': %d %d \n", isdigit(d), ft_isdigit(d));
*/
