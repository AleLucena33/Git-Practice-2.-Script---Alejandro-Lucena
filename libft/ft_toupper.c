/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:33:16 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 19:33:16 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

/*int	main()
{
	ft_putchar_fd(ft_toupper('H'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('e'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('l'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('l'), 1);
	ft_putchar_fd('\n', 1);
    ft_putchar_fd(ft_toupper('0'), 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/