/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:13:42 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/31 11:03:27 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main()
{
	char s[] = "abcd";
	ft_putendl_fd(s, 1);
	ft_putstr_fd(s, 1);
	write(1, "\n", 1);
	return(0);
}*/
