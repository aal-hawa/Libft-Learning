/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:10:28 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/02 14:35:05 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 && *str2 && n > 0)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			n--;
		}
	}
	return (*str1 - *str2);
}
