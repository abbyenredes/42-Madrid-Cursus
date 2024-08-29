/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:32:17 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/16 15:59:34 by abigamas         ###   ########.fr       */
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
