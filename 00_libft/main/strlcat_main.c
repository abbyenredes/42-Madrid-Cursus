/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:15:51 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 13:21:44 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "pollito";
	char	dst[] = "pio";
	int		dstsize;

	dstsize = 1;
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	return (0);
}
