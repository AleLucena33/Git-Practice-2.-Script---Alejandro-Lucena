/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allucena <allucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 01:09:28 by allucena          #+#    #+#             */
/*   Updated: 2024/12/09 01:09:28 by allucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
	{
		return (dest);
	}
	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*int	main()
{
	char	str[] = "a copiar";
	char	dest[18];
	ft_putstr_fd(ft_memcpy(dest, str, 18), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/