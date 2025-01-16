/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:03:49 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 22:03:49 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}

/*int	main()
{

//Esta funcion lo que hace es comparar dos strings y ver cual es mas grande,
//    pero OJO, SOLO HASTA DONDE ESPECIFIQUEMOS LLEGAR (n).
   
//    Aunque uno sea mas grande que el otro (largo), a la primera que se 
//    detecte una diferencia de un char mayor que otro en la tabla ASCII, 
//    detecta una diferencia y la retorna (no llega hasta el final a menos 
//    que sean idénticos). ESTO LO VEMOS EN EL PRIMER CASO:


	char	str1[] = "Este string es muuuuuuuuuuuuucho mas grande";
	char	str2[] = "Este string es por tanto mas pequeño";
	ft_putnbr_fd(ft_strncmp(str1, str2, 100), 1);
	ft_putchar_fd('\n', 1);

	char	str1_1[] = "soy mayor?";
	char	str2_1[] = "soy menor?";
	ft_putnbr_fd(ft_strncmp(str1_1, str2_1, 5), 1);
	ft_putchar_fd('\n', 1);

	char	str1_2[] = "1234567";
	char	str2_2[] = "12345678";
	ft_putnbr_fd(ft_strncmp(str1_2, str2_2, 20), 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/