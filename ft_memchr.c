/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:06 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:09:06 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (*str && i < n)
    {
        if (*(unsigned char *)str == (unsigned char)c)
            return ((void *)str);
        str++;
        i++;
    }
    return (0);
}