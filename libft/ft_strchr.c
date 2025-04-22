/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:12:07 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/15 12:12:09 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	c_c;

	i = 0;
	c_c = c % 256;
	while (s[i] != '\0')
	{
		if (((char *)s)[i] == (char)c_c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c_c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

/* int	main(void)
{
	char	arr[] = "teste";

	printf("%p\n", ft_strchr(arr, 1024));
	printf("%p\n", strchr(arr, 1024));
} */