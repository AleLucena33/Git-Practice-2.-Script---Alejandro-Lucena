/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:09:50 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 16:09:50 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}

/*
void	ft_example(unsigned int i, char *str)
{
	*str += i;
}
int	main()
{
//Esta funcion hace lo mismo que ft_strmapi. Pero hay diferencias, esta 
//funcion no retorna nada ni usa malloc, y en el arg de la funcion example 
//pasada como argumento ponemos directamente la direccion del char. Todo 
//esto es porque estamos directamente MODIFICANCO EL PROPIO STRING s pasado
// como argumento, no creamos uno nuevo 

	char	str[] = "aBcDeF";
	ft_striteri(str, ft_example);
	ft_putendl_fd(str, 1);

    char	str1[] = "GhiJk";
	ft_striteri(str1, ft_example);
	ft_putendl_fd(str1, 1);

    char	str2[] = "123323";
	ft_striteri(str2, ft_example);
	ft_putendl_fd(str2, 1);
    
    return (0);
}*/