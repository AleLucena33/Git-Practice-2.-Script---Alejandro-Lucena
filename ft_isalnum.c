/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:02:54 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 20:02:54 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	ft_putnbr_fd(ft_isalnum('2'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('e'), 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/