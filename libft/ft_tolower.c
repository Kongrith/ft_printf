/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:10:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:24:27 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower
convert alphabet to lowercase
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}
/*
int main()
{
    int j;
    char str[] = "GeEks@123";
    char ch;
	printf("original:   %s\n", str);
 	printf("tolower:    ");	
    
	j = 0;
	while (str[j] != '\0') {
        ch = str[j];
		printf("%c", tolower(ch));
        j++;
    }
	printf("\nft_tolower: ");
	j = 0;
	while (str[j] != '\0') {
		ch = str[j];
		printf("%c", ft_tolower(ch));
		j++;
	}
	printf("\n");
    return 0;
}*/
