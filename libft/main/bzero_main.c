/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:46:24 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 04:56:12 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	unsigned char	s [] = "Michi";
	size_t	n = 2;
	ft_bzero(s, n);
	printf("%c", s[0]);
	return (0);
}