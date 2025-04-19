/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:38:36 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/14 11:38:38 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i - 1] = s[i - 1];
			i++;
		}
	}
	return (dest);
}
/*
int main() {
    // Prueba 1: Superposición (destino comienza dentro de origen)
    unsigned char arr1[] = {1, 2, 3, 4, 5};
    printf("Prueba 1 (Original antes): ");
    printf("%d, %d, %d, %d, %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
    printf("\n");

    ft_memmove(arr1 + 2, arr1, 3); // Destino desde índice 2, \
	copia desde el inicio

    printf("Prueba 1 (Después): ");
    printf("%d, %d, %d, %d, %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
    printf("\n\n");

    // Prueba 2: No superposición (destino antes de origen)
    unsigned char arr2[] = {60, 70, 80};
    unsigned char dest2[3];
    printf("Prueba 2 (Original): ");
    printf("%d, %d, %d", arr2[0], arr2[1], arr2[2]);
    printf("\n");
    printf("Prueba 2 (Destino antes): ");
    printf("%d, %d, %d", arr2[0], arr2[1], arr2[2]);
    printf("\n");

    ft_memmove(dest2, arr2, sizeof(arr2));

    printf("Prueba 2 (Destino después): ");
    printf("%d, %d, %d", arr2[0], arr2[1], arr2[2]);
    printf("\n");

    return 0;
}
*/
//memory move, copy a block memory to one location to another, \
eventhough if both block memories overlap.
//memmove() it's much safer then memcpy.