/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:06:14 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/10 12:06:16 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	result = ft_isprint(argv[1][0]);
	if (result == 0)
		write (1, "0\n", 2);
	else
		write (1, "1\n", 2);
}*/
