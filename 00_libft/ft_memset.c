/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:04:26 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 05:28:10 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function writes len bytes of value c (converted to an unsigned char) 
//to the string b.

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
