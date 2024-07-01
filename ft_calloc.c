/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:45:55 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/06/30 19:45:55 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    void *ptr;

    ptr  = (void *)malloc(num * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, num);
    return (ptr);
}