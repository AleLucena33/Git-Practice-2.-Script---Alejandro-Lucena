/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:38:01 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 19:38:01 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main()
{
	ft_putchar_fd(ft_toupper('H'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('E'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('l'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('l'), 1);
	ft_putchar_fd('\n', 1);
    ft_putchar_fd(ft_toupper('0'), 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/