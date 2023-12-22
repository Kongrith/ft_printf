/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:43:35 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:28:59 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcmp
compare memory area
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char str1[] = "abcf";
	char str2[] = "abcdg";

	printf("memcmp   : %d\n", memcmp(str1, str2, 4));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 4));
	return(0);
}*/
