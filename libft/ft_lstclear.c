/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:40:10 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/04 20:18:47 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temporal;

	if (lst || del)
		return ;
	temporal = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = temporal;
}
