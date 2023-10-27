/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:22:24 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/08 12:37:57 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	size_t	count;
	size_t	size;
	char	*ptr;

	size = 4;
	count = 7;
	ptr = ft_calloc(count, size);
	printf("%s\n", ptr);
	return(0);
}
