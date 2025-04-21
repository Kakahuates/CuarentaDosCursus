/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:40:56 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/14 09:40:59 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *)src;
	if (!dst || !src)
		return (0);
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}
/* 
int	main(void)
{
	char	*source = NULL;
	size_t	num;
	char	destination[num + 1];

	num = 3;
	ft_memcpy(destination, source, num);
	destination[num] = '\0';
	printf("cadena de numeros copiada: %s\n", destination);
	return (0);
} */
