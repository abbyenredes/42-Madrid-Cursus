/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:38:56 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 15:58:01 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function compares n byte string s1 against byte string s2.
//if s1 = s1 ->  0
//if s1 >= s2 -> int > 0
//if s1 < s2 -> int < 0

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		++i;
	return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
}
