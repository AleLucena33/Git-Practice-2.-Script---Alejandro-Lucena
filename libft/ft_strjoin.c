/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 21:46:33 by allucena          #+#    #+#             */
/*   Updated: 2025/01/02 21:46:33 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
	{
		return (ft_strdup(""));
	}
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcat(dest, s2, len1 + len2 + 1);
	return (dest);
}

/*int	main()
{
//Esta es una funcion que une dos strings dados como args. Para ello crea 
//un string dentro de la funcion (el que devuelve la funcion),
//Por tanto, al crear un string debemos asignarle espacio con malloc
//Debemos tener en cuenta el caso en qeu alguno o ambos strings sean NULL,
//(2 primeros if). El caso en que queramos extraer un substring de length
//superior a la del string original(la f(x) cogerá hasta lo max que se pueda)
//y el caso de que el malloc falle debido a ram insuficiente (por ej).


	// Prueba 1: Unir dos strings normales
	const char	str[] = "Hola";
	const char	str1[] = "mundo!";
	char *result = ft_strjoin(str, str1);
	ft_putendl_fd(result, 1);
	free(result); // Liberamos la memoria asignada por ft_strjoin

	// Prueba 2: Otro ejemplo de concatenación
	const char	str_1[] = "Soy";
	const char	str1_1[] = "Alejandro";
	result = ft_strjoin(str_1, str1_1);
	ft_putendl_fd(result, 1);
	free(result); // Liberamos la memoria asignada por ft_strjoin

	// Prueba 3: Concatenación con un string vacío
	const char	str_2[] = "";
	const char	str1_2[] = "Alejandro";
	result = ft_strjoin(str_2, str1_2);
	ft_putendl_fd(result, 1);
	free(result); // Liberamos la memoria asignada por ft_strjoin

	return 0;

}*/