/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:06:13 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:29:58 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	strdup:
*	save a copy of a string
*
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*p;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (dest);
}
