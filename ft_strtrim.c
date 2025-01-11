/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:20:13 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 00:20:13 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}

/*int     main()
{
//Esta es una funcion que lo que hace es recortar el string s1 con el
// string puesto en set, de forma qeu si s1contiene alguna letra de 
//set, las que sea las va eliminando, hasta qeu s1 no tenga ninguna de
// las letras de set, y lo devuelve. OJO, esto lo a los extremos de 
//s1, es decir, vamos por ambos extremos comparando el current char 
//de s1 con cada letra en set, y vamos traverseando en ambos extremos 
//de s1 hasta llegar al medio, vamos asi eliminando las ocurrencias 
//con set, pero a la que el current char NO esté en set paramos por 
//ese extremo de s1

    char	str[] = "hola que tal";
	char	str1[] = "hola";
	ft_putendl_fd(ft_strtrim(str, str1), 1);
    return (0);
}*/
