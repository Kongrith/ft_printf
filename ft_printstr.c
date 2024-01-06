/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:37:53 by kkomasat          #+#    #+#             */
/*   Updated: 2023/12/28 21:52:18 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	length;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	length = ft_strlen(str);
	write(1, str, length);
	return (length);
}
