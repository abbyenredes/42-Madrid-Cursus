/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:52:11 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/26 19:52:27 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Concatenates two strings s1 and s2 into a new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = malloc((i) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy((char *)new_str, s1, i);
	ft_strlcat((char *)new_str, s2, i);
	new_str[i - 1] = '\0';
	return (new_str);
}
