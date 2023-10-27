/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:25:56 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/22 05:09:20 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s [] = "Soy un pollito mojado";
	unsigned int	start = 7;
	size_t	len = 8;
	char	*result;

	result = ft_substr(s, start, len);
	printf ("%s", result);
	return (0);
}
