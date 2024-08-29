/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:27:19 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/21 16:18:16 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function allocates sufficient memory for a copy of the string s1, does the 
//copy, and returns a pointer to it.

void	ft_strcy(char *dest, char *src)
{
	int	copy;

	copy = 0;
	while (src[copy] != '\0')
	{
		dest[copy] = src[copy];
		copy++;
	}
	dest[copy] = '\0';
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcy(dest, (char *)src);
	return (dest);
}
