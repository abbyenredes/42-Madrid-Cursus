/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:11:39 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/04 18:11:46 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function copies len bytes from string src to string dst

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (dst);
	if ((const char *) src >= (const char *) dst)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			++i;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			--i;
		}
	}
	return (dst);
}
