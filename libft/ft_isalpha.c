/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:52:16 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/09 11:52:26 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(unsigned char c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	char	result_char;
	int		result;

	c = '\n';
	result = ft_isalpha(c);
	result_char = result + '0';

	write(1, &result_char, 1);
	return (0);
}*/
