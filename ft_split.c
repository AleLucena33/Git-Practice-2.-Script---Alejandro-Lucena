/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:15:03 by allucena          #+#    #+#             */
/*   Updated: 2025/01/03 15:15:03 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**res;
	char const	*temp;

	temp = s;
	res = tab;
	while (*temp)
	{
		while (*s == sep)
			++s;
		temp = s;
		while (*temp && *temp != sep)
			++temp;
		if (*temp == sep || temp > s)
		{
			*res = ft_substr(s, 0, temp - s);
			s = temp;
			++res;
		}
	}
	*res = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);
	ft_allocate(arr, s, c);
	return (arr);
}

/*int	main()
{
//Esta funcion separa un string dado en un array de substrings 
//(cada palabra en la frase s), y que deberá acabar en NULL, 
//(es decir, tiene de length (malloc) el numero de words mas 1). 
//Para separarlo se basa en el separador puesto como argumento(c or sep), 
//de forma que cuando se encuentra con el separador corta ahi. La funcion 
//usa 2 funciones aux, una para contar el numero de palabras en la frase 
//y que usaremos para reservarle ese espacio + 1 al array que devolveremos 
//como resultado. La otra funcion aux sera la que haga el trabajo sucio, la
// de separar la frase en palabras y guardarlas en el array.

	char	str[] = " Hola que tal";
	char	delim = ' ';
	char	**result = ft_split(str, delim);
	int	i = 0;
	while (result[i] != 0)
	{
		ft_putstr_fd(result[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
	return 0;
}*/
