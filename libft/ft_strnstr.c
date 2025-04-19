/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:43:14 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/19 11:43:16 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *big;
    const char *little;
    char *resultado_propio;
    char *resultado_original_strstr; // Cambiamos el nombre para claridad
    size_t len;
    int test_exitoso;

    // Prueba 1: little es una cadena vacía
    big = "Hola mundo";
    little = "";
    len = 10;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == big && \
	resultado_propio == resultado_original_strstr);
    printf("Prueba 1 (little vacía): ");
    if (test_exitoso)
        printf("Éxito - Resultado: \"%s\"\n", resultado_propio);
    else
        printf("FALLO - Tu resultado: \"%s\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 2: little ocurre al principio de big
    big = "ABCDEF";
    little = "ABC";
    len = 6;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == big && resultado_propio == \
	resultado_original_strstr);
    printf("Prueba 2 (little al principio): ");
    if (test_exitoso)
        printf("Éxito - Resultado: \"%s\"\n", resultado_propio);
    else
        printf("FALLO - Tu resultado: \"%s\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 3: little ocurre en medio de big
    big = "Hola Bar mundo";
    little = "Bar";
    len = 12;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == &big[5] && \
	resultado_propio == resultado_original_strstr);
    printf("Prueba 3 (little en medio): ");
    if (test_exitoso)
        printf("Éxito - Resultado: \"%s\"\n", resultado_propio);
    else
        printf("FALLO - Tu resultado: \"%s\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 4: little ocurre al final de big
    big = "Final Bar";
    little = "Bar";
    len = 9;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == &big[6] && \
	resultado_propio == resultado_original_strstr);
    printf("Prueba 4 (little al final): ");
    if (test_exitoso)
        printf("Éxito - Resultado: \"%s\"\n", resultado_propio);
    else
        printf("FALLO - Tu resultado: \"%s\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 5: little no ocurre en big (dentro de len)
    big = "Manzana";
    little = "Pera";
    len = 7;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == NULL && \
	resultado_original_strstr == NULL);
    printf("Prueba 5 (little no encontrado): ");
    if (test_exitoso)
        printf("Éxito - Resultado: NULL\n");
    else
        printf("FALLO - Tu resultado: \"%p\", strstr: \"%p\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 6: len es menor que la longitud de little y 
	//little no está al principio
    big = "ABCDEF";
    little = "BCD";
    len = 2;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == NULL); // Solo verificamos tu función
    printf("Prueba 6 (len menor que little, no al principio): ");
    if (test_exitoso) {
        printf("Éxito - Tu resultado: NULL, strstr: \"%s\"\n", \
		resultado_original_strstr);
    } else {
        printf("FALLif (!test_exitoso)
        printf("Éxito - Tu resultado: NULL, strstr: \"%s\"\n", \
		resultado_original_strstr);
    else
        printf("FALLO - Tu resultado: \"%p\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);
		resultado: \"%p\", strstr: \"%s\"\n", resultado_propio, \
		resultado_original_strstr);
    }

    // Prueba 7: len es menor que la longitud de big y little está al principio
    big = "ABCDEF";
    little = "ABC";
    len = 2;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == NULL);
    printf("Prueba 7 (len menor que big, little al principio): ");
    if (test_exitoso)
        printf("Éxito - Tu resultado: NULL, strstr: \"%s\"\n", \
		resultado_original_strstr);
    else
        printf("FALLO - Tu resultado: \"%p\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 8: big es más corto que len
    big = "Hola";
    little = "la";
    len = 10;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == &big[2] && resultado_propio == \
	resultado_original_strstr);
    printf("Prueba 8 (big corto, little encontrado): ");
    if (test_exitoso)
        printf("Éxito - Resultado: \"%s\"\n", resultado_propio);
    else
        printf("FALLO - Tu resultado: \"%s\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);

    // Prueba 9: big contiene little pero después de len caracteres
    big = "ABCDEFGH";
    little = "FGH";
    len = 5;
    resultado_propio = ft_strnstr(big, little, len);
    resultado_original_strstr = strstr(big, little);
    test_exitoso = (resultado_propio == NULL && \
	resultado_original_strstr == &big[5]);
    printf("Prueba 9 (little después de len): ");
    if (test_exitoso)
        printf("Éxito - Tu resultado: NULL, strstr: \"%s\"\n", \
		resultado_original_strstr);
    else
        printf("FALLO - Tu resultado: \"%p\", strstr: \"%s\"\n", \
		resultado_propio, resultado_original_strstr);
    return 0;
}
*/
//Search for a compllete substring in max (n) characters.