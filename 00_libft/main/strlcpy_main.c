/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:39:23 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 09:47:25 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "pollito pio";
	char	dst[20];
	int		dstsize;

	dstsize = 4;
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	return (0);
}
