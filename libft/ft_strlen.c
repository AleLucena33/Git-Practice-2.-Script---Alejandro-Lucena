/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:39:03 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 23:39:03 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	const char	*str1 = "Hola mundo!";
	ft_putnbr_fd(ft_strlen(str1), 1);
	ft_putchar_fd('\n', 1);

	return 0;
}*/
