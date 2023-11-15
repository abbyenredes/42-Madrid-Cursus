/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:51:26 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 17:07:54 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function compares not more than n characters
//if s1 = s1 ->  0
//if s1 >= s2 -> int > 0
//if s1 < s2 -> int < 0

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		++i;
	return ((int)((unsigned char) s1[i] - (unsigned char) s2[i]));
}
