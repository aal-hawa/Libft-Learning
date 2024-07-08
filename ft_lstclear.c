/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:41:03 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/07 14:41:03 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_lst;

	if (!lst || !del)
		return;
	current = *lst;
	while (current)
	{
		next_lst = current->next;
		del(current->content);
		free(current);
		current = next_lst;
	}
	*lst = NULL;
}
