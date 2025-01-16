/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:48:25 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 19:48:25 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (NULL);
}
/*int	main()
{
// Esta funcion lo que hace es buscar la primera ocurrencia de un caracter 
// en el string objetivo.
// Va traversando el string hasta que lo encuentra o hasta que recorra todo
// el string.
// Si lo encuentra, devuelve el string que sobra a partir de esa ocurrencia,
// si no, no devuelve nada.
// OJO, SI, ESTA FUNCION DISTINGUE ENTRE MAYUSCULA Y MINUSCULA



//if (c == '\0') 
//podriamos poner tambien '0', ya que el caracter nulo tiene en C
//        return (ptr); 
        //valor numerico de 0, asi que nos referimos a lo mismo. 
	    //este caso no se valora en el loop while porque cuando llega 
        // a '\0'  el loop
                     //sale del while, y no se llega a encontrar.

    char	str[] = "Encuentra el valor de X aqui";
    char	c = 'z';
    char *result = ft_strchr(str, c);
    if (result)
        ft_putendl_fd(result, 1); 
        //esto devuelve el string empezando desde el caracter encontrado
    else
        ft_putendl_fd("Not found...", 1);
}*/
