/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:48:46 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/10 10:48:48 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int		result;
	
	if (argc != 2)
	{
		write (1, "0\n", 2);
		return (1);
	}
	result = ft_isascii(argv[1][0];);
	if (result == 0)
		write (1, "0\n", 2);
	else
		write (1, "1\n", 2);
	return (0);
}*/