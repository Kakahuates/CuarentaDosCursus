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
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* int main() {
    char src[] = "ejemplo";
    char dest1[20] = "abcdefghi";
    char dest2[20] = "abcdefghi";

    // Prueba 1:
    printf("Antes de memmove (solapamiento hacia adelante):\n");
    printf("src: %s\n", src);
    printf("dest1: %s\n", dest1);
	//mio
	ft_memmove(dest1 + 2, src, 7);
	printf("\nDespués de ft_memmove (solapamiento hacia adelante):\n");
	printf("dest1: %s\n", dest1);
	//original
	memmove(dest1 + 2, src, 7);
    printf("\nDespués de memmove (solapamiento hacia adelante):\n");
    printf("dest1: %s\n", dest1);

	// Prueba 2:
	printf("\nAntes de memmove (solapamiento hacia atrás):\n");
    printf("src: %s\n", src);
    printf("dest2: %s\n", dest2);
	//mio
	ft_memmove(dest2, src + 2, 7);
	printf("\nDespués de ft_memmove (solapamiento hacia atrás):\n");
	printf("dest2: %s\n", dest2);
	//original
	memmove(dest2, src + 2, 7);
    printf("\nDespués de memmove (solapamiento hacia atrás):\n");
    printf("dest2: %s\n", dest2);
    return 0;
} */

//memory move, copy a block memory to one location to another,
//eventhough if both block memories overlap.
//memmove() it's much safer then memcpy.