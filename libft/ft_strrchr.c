/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:32:50 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/15 12:32:53 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h>
#include <stdio.h> */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_coinc;

	i = 0;
	last_coinc = NULL;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			last_coinc = (char *) &s[i];
			return (last_coinc);
		}
		i--;
	}
	return (last_coinc);
}
/* 
int main() {
    const char str[] = "Esto es una prueba de strrchr.";
    char *ptr;
	char *ptr2;
    char char_a_buscar;

    // Caso 1: Buscar un carácter existente ('a')
    char_a_buscar = 'a';
    ptr = strrchr(str, char_a_buscar);
	ptr2 = ft_strrchr(str, char_a_buscar);
    if (ptr != NULL && ptr2 != NULL) {
        printf("La última ocurrencia de '%c' se encontró \
		en: %s\n", char_a_buscar, ptr);
		printf("MIO --La última ocurrencia de '%c' \
		se encontró en: %s\n", char_a_buscar, ptr2);
    } else {
        printf("El carácter '%c' no se encontró en \
		la cadena.\n", char_a_buscar);
	}

    // Caso 2: Buscar un carácter inexistente ('z')
    char_a_buscar = 'z';
    ptr = strrchr(str, char_a_buscar);
	ptr2 = ft_strrchr(str, char_a_buscar);
    if (ptr != NULL && ptr2 != NULL) {
        printf("La última ocurrencia de '%c' se \
		encontró en: %s\n", char_a_buscar, ptr);
		printf("MIO --La última ocurrencia de '%c' \
		se encontró en: %s\n", char_a_buscar, ptr2);
    } else {
        printf("AMBOS correctos --El carácter '%c' no se 
		encontró en la cadena.\n", char_a_buscar);
	}

    // Caso 3: Buscar el carácter nulo terminador ('\0')
    char_a_buscar = '\0';
    ptr = strrchr(str, char_a_buscar);
	ptr2 = ft_strrchr(str, char_a_buscar);
    if (ptr != NULL && ptr2 != NULL) {
        printf("La última ocurrencia del carácter nulo \
		se encontró en: %s\n", ptr);
		printf("La última ocurrencia del carácter nulo \
		se encontró en: %s\n", ptr2);
        printf("La dirección del carácter nulo es la misma \
		que la dirección del final de la cadena: %s\n", str + strlen(str));
    } else {
        printf("AMBOS --Error: El carácter nulo no \
		debería no encontrarse en la cadena.\n");
    }

    // Caso 4: Buscar un carácter que aparece varias veces ('e')
    char_a_buscar = 'e';
    ptr = strrchr(str, char_a_buscar);
	ptr2 = ft_strrchr(str, char_a_buscar);
    if (ptr != NULL && ptr2 != NULL) {
        printf("La última ocurrencia de '%c' se encontró en: \
		%s\n", char_a_buscar, ptr);
		printf("La última ocurrencia de '%c' se encontró en: \
		%s\n", char_a_buscar, ptr2);
    } else {
        printf("AMBOS --El carácter '%c' no se encontró \
		en la cadena.\n", char_a_buscar);
    }

    // Caso 5: Buscar un carácter al principio de la cadena ('E')
    char_a_buscar = 'E';
    ptr = strrchr(str, char_a_buscar);
	ptr2 = ft_strrchr(str, char_a_buscar);
    if (ptr != NULL && ptr2 != NULL) {
        printf("La última (y única) ocurrencia de '%c' \
		se encontró en: %s\n", char_a_buscar, ptr);
		printf("La última (y única) ocurrencia de '%c' \
		se encontró en: %s\n", char_a_buscar, ptr2);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", \
		char_a_buscar);
    }

    return 0;
} */
