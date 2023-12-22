/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:10:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:24:12 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* toupper
convert alphabet to uppercase
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}
/*
int	main()
{
    int j;
    char str[] = "GeEks@123";
    char ch;
	printf("original:   %s\n", str);
 	printf("toupper:    ");	
    
	j = 0;
	while (str[j] != '\0') {
        ch = str[j];
		printf("%c", toupper(ch));
        j++;
    }
	printf("\nft_toupper: ");
	j = 0;
	while (str[j] != '\0') {
		ch = str[j];
		printf("%c", ft_toupper(ch));
		j++;
	}
	printf("\n");
    return 0;
}*/
