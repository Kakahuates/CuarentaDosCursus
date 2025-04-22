/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:18:27 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/15 14:19:32 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		else if (s1[i] == '\0')
		{
			return (- (unsigned char)s2[i]);
		}
		else
			return ((unsigned char)s1[i]);
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "abcdefgh";
	char	s2[] = "abcdwxyz";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	return (0);
} */
