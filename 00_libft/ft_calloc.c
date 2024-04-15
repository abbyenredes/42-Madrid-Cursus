/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:06:25 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/22 04:08:06 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocates the requested memory and returns a pointer to it, calloc sets 
//allocated memory to zero.
//$(nitems) − This is the number of elements to be allocated.
//$(size) − This is the size of elements.

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
