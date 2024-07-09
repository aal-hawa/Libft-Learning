/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:46:52 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/06 15:46:52 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastl;

	if (!lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	lastl = *lst;
	while (lastl->next)
		lastl = lastl->next;
	lastl->next = new;
	new->next = NULL;
}
