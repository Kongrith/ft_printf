/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:41:55 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:30:47 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*join_string(char *ptr, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		++i;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		++j;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len1 = ft_strlen((char *) s1);
	len2 = ft_strlen((char *) s2);
	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ptr)
		return (0);
	ptr = join_string(ptr, s1, s2);
	return (ptr);
}
