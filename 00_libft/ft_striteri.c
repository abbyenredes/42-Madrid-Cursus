/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:38:06 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 17:03:28 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applies a function f to each character of the string s, along with its 
//corresponding index

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
