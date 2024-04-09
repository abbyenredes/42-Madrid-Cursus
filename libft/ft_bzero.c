/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abimasap <abimasap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:26:01 by abigamas          #+#    #+#             */
/*   Updated: 2024/03/08 23:51:44 by abimasap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function writes n zeroed bytes to the string s.

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) 0;
		++i;
	}
}
