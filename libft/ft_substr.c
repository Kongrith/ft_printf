/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:40:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/11/04 23:05:19 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (*s == '\0')
		len = 0;
	ptr = (char *) malloc(sizeof(char) * (len  + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len )
	{
		*(ptr + i) = s[start + i];
		++i;
	}
	*(ptr + i) = '\0';
	return (ptr);
}*/

static char	*prov(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (ft_strlen(s) <= start || len == 0)
	{
		str = (char *) malloc(1);
		*str = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	str = prov(s, start, len);
	if (str)
		return (str);
	if (!len && !start)
		return (ft_strdup(s));
	if (len >= ft_strlen(s))
		return (ft_strdup(&s[start]));
	str = (char *) malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i <= len - 1 && s[i])
	{
		str[k] = s[start + i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
