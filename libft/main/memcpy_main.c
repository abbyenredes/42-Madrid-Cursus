/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:53:24 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 15:41:22 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char source[] = "life";
	char dest[] = "2342";
	size_t	n = 2;
	printf("%s", ft_memcpy(dest, source, n));
	return (0);
}
