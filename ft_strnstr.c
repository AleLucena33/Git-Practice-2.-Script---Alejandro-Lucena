/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:16:13 by allucena          #+#    #+#             */
/*   Updated: 2024/12/24 16:16:13 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*little)
		return ((char *)big);
	pos = 0;
	while (big[pos] && (size_t)pos < len)
	{
		if (big[pos] == little[0])
		{
			i = 1;
			while (little[i] && big[pos + i] == little[i]
				&& (size_t)(pos + i) < len)
				i++;
			if (little[i] == '\0')
				return ((char *)&big[pos]);
		}
		pos++;
	}
	return (NULL);
}

/*int	main()
{

//Esta función devuelve todo el string empezando por donde se haya 
//encontrado la palabra little en la frase puesta.

//Tiene para buscarlo en la frase una longitud, si ha pasado esa longitud 
//y no se ha alcanzado la palabra little en la frase pues tampoco vale, 
    //aunque esté
//(eso se ve en el ejemplo 2)

	char big1[] = "Busca esta palabra en esta frase";
    char little1[] = "palabra";
    char *result1;

    result1 = ft_strnstr(big1, little1, strlen(big1));

    if (result1)
        printf("Encontrado: %s\n", result1);
    else
        printf("No encontrado.\n");



    char big2[] = "Busca esta palabra en esta frase.";
    char little2[] = "palabra";
    char *result2;

    result2 = ft_strnstr(big2, little2, 10);

    if (result2)
        printf("Encontrado: %s\n", result2);
    else
        printf("No encontrado.\n");


    
    return 0;
}*/