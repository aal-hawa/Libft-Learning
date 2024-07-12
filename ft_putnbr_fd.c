/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:32:02 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/04 16:32:02 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recursive_nbr(int n, int fd)
{
	char	c;

	if (n < 0)
		return ;
	if (n > 9)
	{
		recursive_nbr(n / 10, fd);
		recursive_nbr(n % 10, fd);
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	recursive_nbr(n, fd);
}
