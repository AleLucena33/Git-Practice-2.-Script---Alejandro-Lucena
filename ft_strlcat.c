/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:31:13 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 14:31:13 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	j = dest_length;
	i = 0;
	if (dest_length < destsize - 1 && destsize > 0)
	{
		while (src[i] && dest_length + i < destsize - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (dest_length >= destsize)
		dest_length = destsize;
	return (dest_length + src_length);
}

/*int	main()
{
//Esta funcion lo que hace es concatenar el string src al string dest puesto
//Una vez hecha la concatenacion devuelve la length del nuevo string 
//Para ello recorremos todo el string dest hasta que lleguemos al final y 
//podamos empezar a poner el de src despues


//i = dest_length
//j = src_length

// en "ptr_src = (char *)src;" //estamos declarando el puntero para src,
	// e ir recorriéndolo

//if (i == size)
	//	return (i + ft_strlen(src));
    //si contando la length del src ya llegamos al limite establecido de 
	//hasta donde queremos copiar pues entonces no hay que concatenar nada 
	//(no podemos). entonces solo devolvemos la length de dest + la de src,
	// usando strlen para ello es decir, que devolver la length total si 
	//concatenamos siempre lo hará (pero i + j != size necesariamente) 
	//pero solo concatenará si queda espacio para hacerlo, hasta donde 
	//digamos

// en "if (j < size - i - 1)" //ese '-1' es porque el caracter nulo 
	//tmb cuenta

// en "while (i < size && *dest)
	{
		dest++;
		i++;
	}"//now we have in i the length of the dest and traversed the 
		//dest string


	char	dest[40] = "helloo";
	char	src[] = "woorld!";
	ft_putnbr_fd(ft_strlcat(dest, src, 20), 1);
	ft_putchar_fd('\n', 1);
	printf("%s", dest);
}*/
