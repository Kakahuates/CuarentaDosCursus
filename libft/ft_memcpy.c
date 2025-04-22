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
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *)src;
	if (dst == NULL && src == NULL && n > 0)
		return (dst);
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}

/* int	main(void)
{
	
	//PRUEBA 1:
	char src[] = "Hola Mundo";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1); // +1 para \
	copiar el null terminador
	//memcpy(dest, src, strlen(src) + 1); // +1 para \
	copiar el null terminador
    printf("Origen: %s\n", src);
    printf("Destino: %s\n", dest);

    if (strcmp(src, dest) == 0) {
        printf("Prueba 1: Éxito - Copia correcta sin solapamiento.\n");
    } else {
        printf("Prueba 1: Fallo - La copia no coincide.\n");
    }

    //PRUEBA 2:
    char src[] = "abcdefghijklmn";
    char dest[10];
	
	ft_memcpy(dest, src, 5);
    //memcpy(dest, src, 5);
    dest[5] = '\0'; // Asegurar la terminación null 
	//para imprimir como cadena

    printf("Origen: %s\n", src);
    printf("Destino (5 bytes): %s\n", dest);

    if (strncmp(src, dest, 5) == 0) {
        printf("Prueba 2: Éxito - Copia de 5 bytes correcta.\n");
    } else {
        printf("Prueba 2: Fallo - La copia de 5 bytes no coincide.\n");
    }

	//PRUEBA 3:
	int src[] = {10, 20, 30, 40, 50};
    int dest[5];
    size_t num_bytes = sizeof(src);

	ft_memcpy(dest, src, num_bytes);
    //memcpy(dest, src, num_bytes);

    printf("Origen: ");
    for (int i = 0; i < 5; i++) printf("%d ", src[i]);
    printf("\nDestino: ");
    for (int i = 0; i < 5; i++) printf("%d ", dest[i]);
    printf("\n");

    if (memcmp(src, dest, num_bytes) == 0) {
        printf("Prueba 3: Éxito - Copia de array de enteros correcta.\n");
    } else {
        printf("Prueba 3: Fallo - \
		La copia del array de enteros no coincide.\n");
    }

    //PRUEBA 4:
	char data[] = "abcdefghi";

    printf("Antes de memcpy (solapamiento hacia adelante):\n");
    printf("data: %s\n", data);

    // Intento de solapamiento: copiar desde data[0] a data[2], 5 bytes
    //memcpy(data + 2, data, 5);
	ft_memcpy(data + 2, data, 5);
    printf("Después de memcpy (solapamiento hacia adelante):\n");
    printf("data: %s\n", data); // El resultado es impredecible

    char data2[] = "abcdefghi";
    printf("\nAntes de memcpy (solapamiento hacia atrás):\n");
    printf("data2: %s\n", data2);

    // Intento de solapamiento: copiar desde data2[2] a data2[0], 5 bytes
    //memcpy(data2, data2 + 2, 5);
	ft_memcpy(data2, data2 + 2, 5);
    printf("Después de memcpy (solapamiento hacia atrás):\n");
    printf("data2: %s\n", data2); // El resultado es impredecible

    printf("\nPrueba 4: Advertencia - \
	Comportamiento indefinido con solapamiento.\n");

	//PRUEBA 5:
	char src[] = "Texto de origen";
    char dest[20] = "Texto destino";

    printf("Antes de memcpy (0 bytes):\n");
    printf("Destino: %s\n", dest);

	ft_memcpy(dest, src, 0);
    //memcpy(dest, src, 0);

    printf("Después de memcpy (0 bytes):\n");
    printf("Destino: %s\n", dest);

    printf("Prueba 5: Éxito - Copia de 0 bytes no modifica el destino.\n");
 
	//PRUEBA 6:
	void *dest = NULL;
    const void *src = NULL;
    size_t size = 10;
    void *result_ft;
    void *result_std;

    // Ejecutamos tu función ft_memcpy
    result_ft = ft_memcpy(dest, src, size);
    printf("Resultado de ft_memcpy: %p\n", result_ft);

    printf("\n(¡Importante! Si el programa crashea antes \
	de este punto con tu versión incorrecta de ft_memcpy,\n");
    printf("significa que la prueba ha detectado el problema).\n");

    // Para comparar el comportamiento (sin esperar un crash del estándar)
    printf("\nComportamiento de memcpy estándar (como referencia):\n");
    result_std = memcpy(dest, src, size);
    printf("Resultado de memcpy: %p\n", result_std);

    printf("\nPrueba completada. Si no hubo un 'Segmentation Fault',\n");
    printf("tu ft_memcpy probablemente manejó el \
	caso de NULLs de forma segura.\n");


    return 0;
}  */
