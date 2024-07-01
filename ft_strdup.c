/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:49 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:09:49 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char    *dst;
    int     i;
    size_t  s;

    i = 0;
    s = 0;
    s = ft_strlen(str);
    dst = malloc(sizeof(char) * (s + 1));
    if (!dst)
        return (0);
    while (str[i])
    {
        dst[i] = str[i];
        i++;
    }
    dst[i] = 0;
    return (dst);
}