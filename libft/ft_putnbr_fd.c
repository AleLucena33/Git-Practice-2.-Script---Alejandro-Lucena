/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:31:40 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 13:31:40 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}
/*int main(void)
{
//es la funcion putnbr pero ademas de escribirlo puedes indicar si se
// trata de un error o qué es lo que estás escribiendo

    ft_putnbr_fd(42, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-123, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);

    return (0);
}*/