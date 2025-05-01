/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:53:42 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/01 15:02:40 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num_to_str;

	num_to_str = ft_itoa(n);
	if (!num_to_str)
		return ;
	ft_putstr_fd(num_to_str, fd);
	free(num_to_str);
}
