/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:39 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/26 21:30:59 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	spc_available;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	spc_available = n - len_dst - 1;
	i = 0;
	if (n <= len_dst)
	{
		return (n + len_src);
	}
	while (src[i] != '\0' && i < spc_available)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (n > 0)
	{
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}
/*
int	main(void)
{
	char	src[] = "holaLoco";
	char	dst[] = "Mundo";
	int		max_size;
	size_t	length;

	max_size = 0;
	length = ft_strlcat(dst, src, max_size);
	printf("%zu", length);
	return (0);
}*/