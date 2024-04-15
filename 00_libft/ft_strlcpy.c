/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:02:04 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 09:47:39 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies up to dstsize - 1 characters from the string src to dst,
//NUL-terminating the result if dstsize is not 0.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
