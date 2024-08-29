/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:36:10 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/21 16:15:33 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Writes the character c to the specified file descriptor fd. 

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
