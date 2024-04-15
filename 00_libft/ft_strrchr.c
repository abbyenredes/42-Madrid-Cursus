/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:01:50 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/02 00:20:42 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function is identical to strchr(), except it locates the last occurrence of c

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}
