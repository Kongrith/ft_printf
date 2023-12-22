/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:16:41 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:20:55 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
  ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ `
a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ 
int	main(void)
{
	char a = '\t';
    printf("test %c  : %d %d \n", a, isprint(a), ft_isprint(a));
	char  b = ' ';
	printf("test %d  : %d %d \n", b, isprint(b), ft_isprint(b));
	char c = '5';
	printf("test %c  : %d %d \n", c, isprint(c), ft_isprint(c));
	char  d = 'B';
	printf("test %c  : %d %d \n", d, isprint(d), ft_isprint(d));
	char  e = 3;
	printf("test '%c': %d %d \n", e, isprint(e), ft_isprint(e));
*/
