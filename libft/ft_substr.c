/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:51:19 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/26 19:51:40 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Extracts a substring from a string s starting at index start with a specified
// length len. It allocates memory for the substring, copies the characters
// from s to the substring, and returns the pointer to the substring.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	ft_memcpy(subs, &s[start], len);
	subs[len] = '\0';
	return (subs);
}
