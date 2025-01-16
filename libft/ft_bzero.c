/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 00:49:18 by allucena          #+#    #+#             */
/*   Updated: 2024/12/09 00:49:18 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr++ = 0;
		n--;
	}
}

/*int	main()
{

	char str[] = "Hola, mundo!";
	size_t len = sizeof(str);

	printf("Antes de bzero: %s\n", str);

	ft_bzero(str, 5);

	printf("Despues de bzero (caracter por caracter): ");
	for (size_t i = 0; i < len; i++)
	{
		if (str[i] == '\0')
			printf("\\0 "); // Representar caracteres nulos explícitamente
		else
			printf("%c ", str[i]);
	}
	printf("\n");

	// O usar write para mostrar el contenido completo del buffer
	write(1, "Despues de bzero (raw buffer): ", 31);
	write(1, str, len);
	write(1, "\n", 1);

	return (0);
}*/