/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:39:21 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 20:58:21 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function locates the first occurrence of c (converted to a char) 
//in the string pointed to by s.

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		++s;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (0);
}
