/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:50:56 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/16 15:51:00 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	i = 0;
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char)p_s1[i] != (unsigned char)p_s2[i])
		{
			return ((unsigned char)p_s1[i] - (unsigned char)p_s2[i]);
		}
		i++;
	}
	return (0);
}
/* 
int	main(void)
{
	int		result;
	char	*text1 = NULL;
	char	text2[] = "abc";
	char	text3[] = "abf";

	//Prueba 1 comprobando si son iguales
	printf("Comprobando si '%s' es igual a '%s':\n", text1, text2);
    result = ft_memcmp(text1, text2, 3);
    if (result == 0)
        printf("¡Correcto! Son iguales, '%d'.\n\n", result);
	else
        printf("¡Error! Deberían ser iguales, pero el resultado \
		fue %d.\n\n", result);

	//Prueba 2 comprobando si son diferentes
	printf("Comprobando si '%s' es igual a '%s':\n", text1, text3);
    result = ft_memcmp(text1, text3, 3);
    if (result == 0) {
        printf("¡Error! No deberían ser iguales, pero el resultado \
		fue %d.\n\n", result);
    } else if (result < 0) {
        printf("¡Correcto! '%s' es menor que '%s'. \
		Resultado: %d\n\n", text1, text3, result);
    } else {
        printf("¡Error! Se esperaba que '%s' fuera menor que '%s', \
		pero el resultado fue %d.\n\n", text1, text3, result);
    }

	//Prueba 3 comprobando  si es menor comparando solo las 2 primeras letras
	printf("Comprobando si '%s' es menor que '%s' comparando solo \
	2 letras:\n", text1, text3);
    result = ft_memcmp(text1, text3, 2);
    if (result == 0) {
        printf("¡Correcto! Las primeras 2 letras son iguales.\n\n");
    } else {
        printf("¡Error! Las primeras 2 letras deberían ser iguales, \
		pero el resultado fue %d.\n\n", result);
    }

    return (0);

} */

//Compare byte string, compare the (n) bytes of the memory areas s1 and s2. 
//Return an int less, equal or greater than 0 if s1 is, respectively, 
//less, equal or greater than s2.
