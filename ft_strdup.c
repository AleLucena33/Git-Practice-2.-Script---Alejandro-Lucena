/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:35:32 by allucena          #+#    #+#             */
/*   Updated: 2024/12/24 18:35:32 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}

/*int	main(void)
{
//Esta funcion crea un duplicado de un string y libera la memoria tras copiarlo
//(string duplicate)


	char str[] = "Hola, mundo!";
	char *copy = ft_strdup(str);

	if (copy != NULL)
	{
		printf("Original: %s\n", str);
		printf("Copia: %s\n", copy);
		free(copy);  // No olvidar liberar la memoria
	}
	else
	{
		printf("Error al copiar la cadena.\n");
	}

	return 0;
}*/
