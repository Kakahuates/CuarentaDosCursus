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

int	ft_atoi(const char *nptr)
{
	return (0);
}

int	main(void)
{
	const char	*num_text = "++--++----99";
	int			num_convert;
	
	num_convert = atoi(num_text);
	printf("El texto es: \"%s\"\n", num_text);
	printf("El texto convertido a numero es: %d\n", num_convert);
	/*if (num_convert == -99)
		printf("conversion exitosa!\n");
	else
		printf("Hubo un problema\n");*/
	return (0);
}

//The  atoi()  function converts the initial portion of the string pointed to by
//nptr to int.  The behavior is the same as
 