/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:07:53 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 14:07:53 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += n;
		d += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/*int main()
{
	// Ejemplo 1: Copiar los primeros 10 caracteres de 
	"Elemento a copiar" a "dest"
	char str[] = "Elemento a copiar";
	char dest[0];
	ft_putstr_fd(ft_memmove(dest, str, 10), 1);
	ft_putchar_fd('\n', 1);

	// Ejemplo 2: Copiar los primeros 5 caracteres de "123456789" 
	a partir de la posición 4 de "str1"
	char str1[] = "123456789";
	ft_putstr_fd(ft_memmove(str1+4, str1, 5), 1);  
	// Copiará "123412345"
	ft_putchar_fd('\n', 1);

	return 0;
}*/
