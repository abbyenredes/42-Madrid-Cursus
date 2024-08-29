/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:05:40 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/15 21:19:38 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Writes an integer n to the specified file descriptor fd. 

void	ft_putnbr_fd(int nn, int fd)
{
	unsigned int	n;

	if (nn > 0)
		n = nn;
	else
		n = -nn;
	if (nn < 0)
		write(fd, "-", 1);
	if (n > 0)
	{
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else if (n <= 9)
			ft_putchar_fd(n + '0', fd);
	}
}
