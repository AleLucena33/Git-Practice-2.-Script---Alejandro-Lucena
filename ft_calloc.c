/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:26:52 by allucena          #+#    #+#             */
/*   Updated: 2024/12/24 18:26:52 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

/*
int	main(void)
{

//La función malloc simplemente asigna memoria sin inicializarla. 
//En cambio, ft_calloc asigna memoria e inicializa todos los bytes a cero.


	int *arr = ft_calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]); 
		// Todos los valores deberían ser 0.
	}
	
	free(arr); // No olvidar liberar la memoria.
	return (0);
}*/
