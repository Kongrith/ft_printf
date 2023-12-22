/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:05:44 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:33:13 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_strmapi
*	apply a function to each character of a string
*
*	parameters:
*	s: string
*	f: function to apply to each character
*
*	return:
*	new string
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *) malloc(sizeof(char) * (ft_strlen((char *) s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}
/*
char    even_to_upper(unsigned int i, char c)
{
	if (i%2 == 0)
		return (ft_toupper(c));
	else
		return (c);
}

int main()
{
	char	*s;

	s = "aBcDeF";
	printf("%s\n", s);
	printf("%s\n", ft_strmapi(s, even_to_upper));
	return(0);
}*/
