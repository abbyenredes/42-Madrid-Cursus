/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:21:39 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 16:10:21 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Trims the leading and trailing characters from a string s1 that match any 
//character in the set set.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*new_ptr;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	new_ptr = ft_substr(s1, i, (j + 1) - i);
	return (new_ptr);
}
