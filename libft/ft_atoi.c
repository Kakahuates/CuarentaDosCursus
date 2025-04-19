/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:27:50 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/16 16:27:52 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ejecutar_prueba(const char *entrada, int esperado, int numero_prueba) {
    int resultado = atoi(entrada);
    if (resultado == esperado) {
        printf("Prueba %d: PASADA (Entrada: \"%s\", Resultado: %d)\n", \
		numero_prueba, entrada, resultado);
    } else {
        printf("Prueba %d: FALLIDA (Entrada: \"%s\", Esperado: %d, \
		Resultado: %d)\n", numero_prueba, entrada, esperado, resultado);
    }
}

int main() {
    ejecutar_prueba("--+--123", 0, 1);
    ejecutar_prueba("-987", -987, 2);
    ejecutar_prueba("   42   ", 42, 3);
    ejecutar_prueba("abc123", 0, 4);
    ejecutar_prueba("123xyz12", 123, 5);

    return 0;
}
