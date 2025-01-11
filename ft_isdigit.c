/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 22:59:10 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 22:59:10 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
/*
int main(void){

	ft_putnbr_fd(ft_isdigit('2'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit(218), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/