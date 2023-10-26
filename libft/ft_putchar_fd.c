/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:01:02 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/26 20:01:21 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Writes the character c to the specified file descriptor fd.

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
