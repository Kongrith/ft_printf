/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:06:25 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/31 10:52:11 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		++i;
	}
}

/*
void	printf_char(unsigned int i, char *c)
{
	printf("i:%d %c %c\n", i, *c, c[0]);
	*c = ft_toupper(*c);
}

int main()
{
	char	s[] = "aBcDeF";
	printf("before:%s\n", s);
	ft_striteri(s, printf_char);
	printf("after:%s\n", s);
	return(0);
}*/
