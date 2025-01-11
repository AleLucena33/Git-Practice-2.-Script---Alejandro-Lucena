/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:25:55 by allucena          #+#    #+#             */
/*   Updated: 2024/12/24 13:25:55 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *elem1, const void *elem2, size_t sz)
{
	unsigned char	*el1;
	unsigned char	*el2;

	el1 = (unsigned char *)elem1;
	el2 = (unsigned char *)elem2;
	while (sz && *el1 == *el2)
	{
		++el1;
		++el2;
		--sz;
	}
	if (sz)
		return (*el1 - *el2);
	else
		return (0);
}

/*int main()
{
//Esta funcion hace lo msimo que el strcmp pero sirve para cualquier datatype
//puedes comparar cadenas de numeros, arrays o lo que quieras, no solo strings

//Por tanto los argumentos de s1, s2 son de tipo void *, no char *. 

//Hace falta ahora propocionar la length del array o string o lo que sea


	char	str1[] = "Hola";
	char	str2[] = "Hola";
	ft_putnbr_fd(ft_memcmp(str1, str2, 5), 1);
	return 0;

}*/