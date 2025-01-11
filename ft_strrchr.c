/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:03:18 by allucena          #+#    #+#             */
/*   Updated: 2024/12/23 22:03:18 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (NULL);
}

/*int	main()
{
//Esta funcion lo que hace es buscar LA LAST OCURRENCIA de un caracter en 
	//el string objetivo.
//Va traverseando el string de izq a drcha hasta que lo encuentra o hasta
	// que recorra todo el string.
//Si lo encuentra, devuelve su pos, si no, no devuelve nada. Si en


//en "if (c == '\0')
	//	return ((char *)s);""
    //podriamos poner tambien '0', ya que el caracter nulo tiene en C
    //valor numerico de 0, asi que nos referimos a lo mismo. 
	//este caso no se valora en el loop while porque cuando llega a '\0'
	//el loop sale del while, y no se llega a encontrar.



	const char str[] = "WWWW"; 
	int c = 'W';
	char *result = ft_strrchr(str, c);
	if (result)
		ft_putstr_fd(result, 1);
	ft_putchar_fd('\n', 1);
	return 0; 
}*/