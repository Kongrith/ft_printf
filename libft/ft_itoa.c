/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:51:54 by kkomasat          #+#    #+#             */
/*   Updated: 2023/10/28 18:35:16 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digit(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (digit = 1);
	while (n != 0)
	{
		n /= 10;
		++digit;
	}
	return (digit);
}

static	char	*generate_string(int abs_value, int size, int positive_flag)
{
	char	*s;
	int		i;

	s = malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	i = size;
	while (i >= 0)
	{
		if (i == size)
			*(s + i) = '\0';
		else if (i == 0 && positive_flag == 0)
			*(s + i) = (char) '-';
		else
		{
			*(s + i) = abs_value % 10 + '0';
			abs_value /= 10;
		}
		--i;
	}
	return (s);
}

static	void	calc_size_and_flag(int n, int *abs_value, \
		int *size, int *positive_flag)
{
	if (n >= 0)
		*positive_flag = 1;
	else
		*positive_flag = 0;
	if (!*positive_flag)
	{
		*abs_value = n * -1;
		*size = count_digit(*abs_value) + 1;
	}
	else
	{
		*abs_value = n;
		*size = count_digit(*abs_value);
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		abs_value;
	int		size;
	int		positive_flag;

	if (n == -2147483648)
	{
		s = malloc(sizeof(char) * (12));
		if (!s)
			return (NULL);
		ft_strlcpy(s, "-2147483648", 12);
		return (s);
	}
	calc_size_and_flag(n, &abs_value, &size, &positive_flag);
	s = generate_string(abs_value, size, positive_flag);
	return (s);
}
/*
int	main()
{
	int		n;
	char	*ans;

	n = -123;
	ans = ft_itoa(n);
	//printf("INT_MIN:%d vs %d\n", INT_MIN, n);
	printf("ft_itoa:%s\n", ans);
	free(ans);
	return(0);
}*/
