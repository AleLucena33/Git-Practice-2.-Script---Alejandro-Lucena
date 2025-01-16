/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:02:20 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 01:02:20 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
int main(void)
{
//Esta funcion es para escribir un string dado como argumento y en el arg
// 'd', puedes poner 1 si quieres que lo escriba o 2 para expresar un 
//error. Despúes de escribirlo pone un salto de linea

    char *str = "Hola";
    ft_putendl_fd(str, 1);
    return(0);
}
*/