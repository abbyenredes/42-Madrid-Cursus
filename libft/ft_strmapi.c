/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:54:22 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/26 19:59:28 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applies a function f to each character of the string s, generating a new
//string with the modified characters.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	char	*dst;
	int		len;

	c = 0;
	len = ft_strlen(s);
	dst = (char *) ft_calloc(len + 1, 1);
	if (!dst)
		return (free(dst), NULL);
	while (s[c] != '\0')
	{
		dst[c] = f(c, s[c]);
		c++;
	}
	return (dst);
}
