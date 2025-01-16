/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:08:00 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 14:08:00 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*//int	main()
{
    //esta funcion lo que hace es copiar el string src en el dest hasta
    //que o no haya mas espacio en dest o hasta que se haya copiado todo el src.
    //despues de esto la funcion retorna la length del src.


    //(if (!size) es que size == 0)

    
    char src1[] = "Hola, mundo!";
    char dest1[20];
    char dest2[5];


     // Caso 1: Tamaño de destino mayor que src
    ft_putnbr_fd(ft_strlcpy(dest1, src1, sizeof(dest1)), 1);
    ft_putchar_fd('\n', 1);
    printf("Destino: '%s'\n", dest1);
    ft_putchar_fd('\n', 1);


     // Caso 2: Tamaño de destino menor que src
    ft_putnbr_fd(ft_strlcpy(dest2, src1, sizeof(dest2)), 1);
    ft_putchar_fd('\n', 1);
    printf("Destino: '%s'\n", dest2);
	ft_putchar_fd('\n', 1);
   
    return 0;

}*/