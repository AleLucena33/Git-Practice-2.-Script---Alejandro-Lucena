/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:03:42 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 20:03:42 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

/*int	main()
{
	ft_putnbr_fd(ft_isascii(23), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(218), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/