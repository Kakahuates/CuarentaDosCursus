/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:46:28 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/25 14:21:44 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr_mem;

	totalsize = 0;
	totalsize = nmemb * size;
	ptr_mem = malloc(totalsize);
	if (ptr_mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr_mem, totalsize);
	return (ptr_mem);
}
/* #include <stdio.h>

int	main(void)
{
	int				isallzero;
	int				*pointer;
	size_t			i;
	size_t			numbers;
	size_t			size_numbers;
	unsigned char	*byte_pointer;
	const char		*result;
	
	i = 0;
	size_numbers = sizeof(int);
	isallzero = 0;
	numbers = 10;
	pointer = (int *)ft_calloc(numbers, sizeof(int));
	if (pointer == NULL)
	{
		printf("Error: calloc devolvio NULL inesperadamente");
		return (0);
	}
	else
	{
		isallzero = 1;
		while (i < numbers)
		{
			if (pointer[i] != 0)
			{
				isallzero = 0;
				break;
			}
			i++;
		}
		if (!isallzero)
		{
			printf("Error: prueba invalida, la memoria\
			 no esta en 0");
		}
		else
			printf("Prueba valida: %p\n", pointer);
		free(pointer);
	}
	return (0);
} */