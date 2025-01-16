/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:35:39 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 23:35:39 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
/*
int main(void){

	ft_putnbr_fd(ft_isprint('h'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint(218), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/