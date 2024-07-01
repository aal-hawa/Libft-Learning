/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:07:53 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:07:53 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void* s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(char*)s[i] = '\0';
		i++;
	}
}