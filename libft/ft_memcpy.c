/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <kkomasat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:03 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:27:51 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	memcpy
*	copy a memory block where source and destination do not overlap
*/

#include "libft.h"

void	*ft_memcpy(void *dest0, const void *src0, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char *) dest0;
	src = (char *) src0;
	if ((dest == src) || n == 0)
		return (dest);
	if ((dest == NULL) && (src == NULL))
		return (0);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void *) dest);
}
/*
int main () {
	char src1[] = "1234";
	//char src2[] = "1234";
	char dst1[] = "0000";
	//char dst2[] = "0000";
	

	printf("Before   memcpy dest = %s\n", dst1);
	printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 4));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 4));
	

	//printf("Before   memcpy dest = %s\n", dst1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(dst1, src1, 30));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(dst2, src2, 30));  

	
	//printf("Before   memcpy dest = %s\n", src1);
	//printf("After    memcpy dest = %s\n", (char*) memcpy(src1+1, src1, 4));
	//printf("After ft_memcpy dest = %s\n", (char*) ft_memcpy(src2+1, src2, 4));
	
	return(0);}*/
