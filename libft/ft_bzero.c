/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:50:54 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:21:52 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		*(ptr + i) = (unsigned int) 0;
		++i;
	}
}
/*
int main(void) 
{ 
    char str1[40] = "GeeksForGeeks is for programming geeks.";
	char str2[40] = "GeeksForGeeks is for programming geeks.";
    //printf("%d\n", (int) ft_strlen(str1));
	printf("Before   bzero(): %s \n", str1); 
  
    bzero(str1 + 31, 8); 
    printf("After    bzero(): %s\n", str1); 
    ft_bzero(str2 + 31, 10);
	printf("After ft_bzero(): %s\n", str2);
	return 0; 
}*/
