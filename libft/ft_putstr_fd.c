/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:45:10 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 01:45:10 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!s)
		return ;
	while (*s)
	{
		s++;
		len++;
		i++;
	}
	while (i != 0)
	{
		s--;
		i--;
	}
	write(fd, s, len);
}
/*int main(void)
{
//escribir un string dado y lo mismo, 1 para escribir, 2 para error.
    char *str = "Hola";
    ft_putstr_fd(str, 1);
    return(0);
}*/