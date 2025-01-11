/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:13:44 by allucena          #+#    #+#             */
/*   Updated: 2024/12/24 18:13:44 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	b = 1;
	c = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			b *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		++i;
	}
	return (c * b);
}
/*
int	main(void)
{
	char str1[] = "   -123";
	char str2[] = "42";
	char str3[] = "+56789";
	char str4[] = "   00123abcd";

	printf("Input: %s; Output: %d\n", str1, ft_atoi(str1));
	printf("Input: %s; Output: %d\n", str2, ft_atoi(str2));
	printf("Input: %s; Output: %d\n", str3, ft_atoi(str3));
	printf("Input: %s; Output: %d\n", str4, ft_atoi(str4));

	return 0;
}*/