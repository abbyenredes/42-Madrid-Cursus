/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:52:36 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 16:06:35 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1 [] = "4242 Code e 4242";
	char	set [] = "42";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	return(0);
}
