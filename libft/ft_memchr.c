/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:08:20 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/25 14:49:35 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		char_to_find;
	const unsigned char	*ptr_s;

	i = 0;
	ptr_s = (const unsigned char *)s;
	char_to_find = (unsigned char)c;
	while (i < n)
	{
		if (char_to_find == ptr_s[i])
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	unsigned char	byte_find;
	int				to_find;
	char			arr[] = {1, 2, 3, 4, 5, 6};
	void			*ptr_result;

	to_find = 3;
	byte_find = (unsigned char)to_find;
	ptr_result = ft_memchr(arr, byte_find, sizeof(arr));
	if (ptr_result != NULL)
		printf("El character encontrado
		en la direccion:  %p\n", ptr_result);
	else
		printf("No ha encontrado ocurrencias");
}*/