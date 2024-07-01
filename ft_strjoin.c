/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:15:02 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:15:02 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len;
    char    *dst;

    len = ft_strlen(s1) + ft_strlen(s2);
    dst = malloc(sizeof(char) * (len + 1));
    if (!dst)
        return (0);
    while (*s1)
    {
        *dst = *s1;
        dst++;
        s1++;
    }
    while (*s2)
    {
        *dst = *s2;
        dst++;
        s2++;
    }
    *dst = 0;
    return (dst);
}