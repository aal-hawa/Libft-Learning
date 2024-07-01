/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:41 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:09:41 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void* str, int c, size_t n)
{
	size_t i;
	
	if (!str)
		return (0);
	i = 0;
	while (i < n)
	{
		(unsigned char*)str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}