/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:05:12 by allucena          #+#    #+#             */
/*   Updated: 2025/01/02 19:05:12 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t length)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < length)
		length = size;
	subst = (char *)malloc(sizeof(char) * (length + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, length + 1);
	return (subst);
}

/*int	main(void)
{
//Esta funcion lo que hace es devolver un substring que se extrae de un
//string origen mas grande (s). Para ello se le pasa el str origen, de
//donde quieras empezar a extraer(start), y cuanto quieres extraerle desde
//el start. La funcion crea el string que va a devolver dentro de si misma,
//IMPORTANTE: para que no se pierda el string extraido se declara como un ptr
//y se le asigna mem en el heap con malloc. SI NO SE USARA MALLOC, EL 
//EXTRAIDO SE PERDERIA AL ACABAR LA F(X).

	char	str[] = "Hola mundo!";
	ft_putendl_fd(ft_substr(str, 12, 8), 1);

	
	ft_putendl_fd(ft_substr(str, 5, 0), 1);

	
	ft_putendl_fd(ft_substr(str, 9, 70), 1);

	
	ft_putendl_fd(ft_substr(str, 0, 12), 1);

	
	ft_putendl_fd(ft_substr(str, 0, 4), 1);

	return(0);
}*/