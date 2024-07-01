/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:16 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:09:16 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memmove(void* str1, const void* str2, size_t n)
{
	size_t	i;

	if (!str1 && !str1)
		return (NULL);
	i = 0;
	while (i < n)
	{
		(char*)str1[i] = (char*)str2[i];
		i++;	}
	return (str1);
}