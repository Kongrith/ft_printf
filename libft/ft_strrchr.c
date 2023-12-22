/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:19:30 by kkomasat          #+#    #+#             */
/*   Updated: 2023/11/04 13:30:21 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	strrchr
*	locate last "ch" character in the pointer string.
*/

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	c = c % 256;
	while (s[i] && i < ft_strlen(s))
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		++i;
	}
	if (s[i] == c) 
		ptr = (char *)(s + i);
	//if (ptr_match != NULL)
	//	return (ptr_match);
	//else if ((unsigned char)*ptr == (unsigned char)c)
	//	return (ptr);
	//else
	//	return (NULL);
	return (ptr);
}
/*
int main () {
	// str = teste  ch = x    
	const char	str[] = "123456789";
	int ch = 'a'; 

	printf("original      : %s\n", str);
	printf("char: %c int %d\n", ch, ch);
	printf("strrchr    (%c) : %s\n", ch, strrchr(str, ch));
	printf("ft_strrchr (%c) : %s\n", ch, ft_strrchr(str, ch));
	return 0;
}*/
