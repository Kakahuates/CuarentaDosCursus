/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:45:07 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/10 15:45:11 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	unsigned long	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(int argc, char *argv[])
{
	unsigned long	length;
	
	length = ft_strlen(argv[1]);
	if (argc != 2)
	{
		write(1, "\0", 2);
		return(1);
	}
	printf("%lu\n", length);
	return (0);
}*/
