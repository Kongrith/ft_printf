/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:16:43 by kkomasat          #+#    #+#             */
/*   Updated: 2023/11/04 22:25:38 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove
copy a memory block where source and destination can overlap

issue: https://github.com/alelievr/libft-unit-test/pull/146
explanation:
Upon investigation, I found that it was due to mprotect(ptr, 4096, PROT_NONE);
in the electric_alloc_rev function of main (alelievr).
So it should be mprotect(ptr, 16384, PROT_NONE);.
After modifying the code to allocate memory space based on page size, this problem no longer occurs.

a) backward copy
|_;_;_;_;_;_|          (source)
      |_;_;_;_;_;_|    (destination)
            <-<-<-^    start from the end to shift the values to the right

b) forward copy
      |_;_;_;_;_;_|    (source)
|_;_;_;_;_;_|          (destination)
^->->->                start from the beginning to shift the values to the left

*/
#include "libft.h"
/*
static	char	*backward_copy(char *dest, char *src, size_t n)
{
	size_t	i;
	
	src =+ n;
	ss
	i = n;
	while (i > 0)
	{
		*(dest + i - 1) = *(src + i - 1);
		--i;
	}
	return (dest);
}

static	char	*forward_copy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}

void	*ft_memmove(void *dest0, const void *src0, size_t len)
{
	char		*dest;
	char	*src;

	dest = (char *) dest0;
	src = (char *) src0;
	//if (len > ft_strlen(src))
	//	len = ft_strlen(src);
	if (src == dest)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		dest = backward_copy(dest, src, len);
	else
		dest = forward_copy(dest, src, len);
	return (dest);
}*/
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp_2;
	size_t	i;

	temp_2 = (unsigned char *) dest;
	temp = (unsigned char *) src;
	i = 0;
	if (src == dest || n == 0)
		return (dest);
	if (dest > src)
	{
		while (n--)
			temp_2[n] = temp[n];
		return (dest);
	}
	while (i < n)
	{
		temp_2[i] = temp[i];
		i++;
	}
	return (dest);
}*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
