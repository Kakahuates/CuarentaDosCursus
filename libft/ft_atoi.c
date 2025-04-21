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

#include "libft.h"
//#include <stdlib.h>

/* static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
} */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/* 
int	main(void)
{
	const char	*num_text = " \n+99";
	int			num_convert;
	
	//num_convert = atoi(num_text);
	ft_putnbr(ft_atoi(num_text));
	ft_putchar('\n');
	
	//printf("El texto es: \"%s\"\n", num_text);
	//printf("El texto convertido a numero es: %d\n", num_convert);
	//if (num_convert == -99)
	//	printf("conversion exitosa!\n");
	//else
	//	printf("Hubo un problema\n");
	return (0);
}
*/

//The  atoi()  function converts the initial portion of the string pointed to by
//nptr to int. 