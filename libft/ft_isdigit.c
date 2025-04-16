/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:05:23 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/09 15:05:30 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


/*
int	main(int argc, char *argv[])
{
	int		i;
	int		result;
	char	character;

	i = 0;
	character = argv[1][0];
	result = ft_isdigit(character);
	result = result + '0';
	if (argc != 2)
	{
		return (1);
	}
	write (1, &result, 1);
	return (0);
}*/
