/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:14:36 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 22:14:36 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n != 0 && *ptr != c)
	{
		++ptr;
		--n;
	}
	if (n != 0)
		return ((void *)ptr);
	else
		return (NULL);
}

/*int	main()
{

//Esta funcion es igual que la de ft_strchr, es decir, busca algo en un string.
//La diferencia está en que esta funcion admite cualquier data type, 
//puedes buscar
//ints, chars, ... lo que sea. Esto lo hace trabajando con bloques de memoria.


//Pero ojo, en la otra funcion no hacia falta poner una size porque al admitir 
//solo strings pues el size se sabia por llegar hasta el '\0', pero aqui hay que
//pasarlo como arg porque puede ser un array po ejemplo de una size determ.

	char str[] = "Encuentra en este string";
    char c = 'z';
    char *result = ft_memchr(str, c, ft_strlen(str));

    if (result)
    {
        ft_putstr_fd(result, 1);
    }
    else
    {
        ft_putstr_fd("Caracter no encontrado\n", 1);
    }
    ft_putchar_fd('\n', 1);
    return 0;
}*/