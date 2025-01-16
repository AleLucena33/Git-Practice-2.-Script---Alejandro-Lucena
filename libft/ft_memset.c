/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:56:17 by allucena          #+#    #+#             */
/*   Updated: 2024/12/08 23:56:17 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{

//Esta funcion cambia hasta donde le digas los caracteres del string 
//por el char que le digas para sustituir

	 //esto se puede usar para rellenar strings, arrays o matrices
	//cadena de caracteres: (string)
	char str[] = "Hola mundo!";
	printf("antes: %s\n", str);

	ft_memset(str, '.', 5);
	printf("despues: %s\n", str);


	//un array de enteros:
	printf("Array antes: \n");
	int arr[10] = {0};
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Array despues: \n");
	ft_memset(arr, 2, sizeof(arr)); //aqui lo modificamos
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	// una matriz de bytes:
	unsigned char buffer[8];
    	ft_memset(buffer, 0xFF, sizeof(buffer)); 
		// Llena el buffer con valores 0xFF(hexadecimal) (255 en decimal)

	printf("Buffer inicializado con 0xFF:\n");
	for (int i = 0; i < 8; i++)
	{
        	printf("0x%X ", buffer[i]); 
		//0x%X es para escribir una variable hexadecimal (si, 
			//es un tipo diferente)
		//si es %X es de la a la f en mayuscula. Si es %x es de la a la 
			//f en minuscula
    	}
	printf("\n");
	 //por ejemplo, mira esto:
		//int num = 255;
    	//	printf("Decimal: %d\n", num);
    	//	printf("Hexadecimal: 0x%X\n", num);
    	//	printf("Hexadecimal (minúscula): 0x%x\n", num);
	return 0;
}
*/