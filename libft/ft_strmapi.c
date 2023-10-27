/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:54:22 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 17:36:28 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applies a function f to each character of the string s, generating a new
//string with the modified characters.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	dst = ft_strdup(s);
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}
