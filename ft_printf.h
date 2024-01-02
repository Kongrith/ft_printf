/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:31:27 by kkomasat          #+#    #+#             */
/*   Updated: 2024/01/02 00:13:26 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include "./libft/libft.h"

int ft_printf(const char *str, ...);
int ft_printchar(int c);
int ft_printstr(char *str);
int ft_printptr(void *ptr);
int ft_printdec(int d);

#endif
