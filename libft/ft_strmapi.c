/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:49:11 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 15:49:11 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = 0;
	return (res);
}

/*
char	ft_example_function(unsigned int i, char s)
{
	//esta funcion lo que hace es sumar a cada caracter 1, por ej, 
	//si el caracter es 'a', pues 'a' + 1 = 'b'. Y asi con todo el string

	i = 1;
	s += i;
    return s;
}

int	main()
{
//Esta es una funcion que aplica una funcion apasada como argumento a 
//un string(frase) dado como argumento tambien. La funcion que se aplica
// es un puntero a la funcion desarrollada aparte, y se les pasa como 
//argumento el indice en que se encuentra el string s y donde se va a 
//aplicar y el contenido del string en ese indice (char). Traverseamos todo
// el string s y creamos un string ncuevo con la funcion aplicada. Usamos 
//para ello malloc y que el nuevo string creado no se pierda


	char	str[] = "Hola que tal";
	char	*result = ft_strmapi(str, ft_example_function);
	if (result)  // Comprobamos si la asignación de memoria fue exitosa
	{
		ft_putendl_fd(result, 1);  // Imprimimos la cadena resultante
	}
	else
	{
		ft_putendl_fd("Error al crear el string", 1);
	}
    
    return (0);
}*/