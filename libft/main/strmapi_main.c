/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:08:50 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 17:50:00 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char my_tolower(unsigned int c, char s1)
{
	char	str;

	(void)c;
	str = s1;
	if (str >= 65 && str <= 90)
		str += 32;
	return(str);
}

char my_toupper(unsigned int c, char s1)
{
	char	str;

	(void)c;
	str = s1;
	if (str >= 97 && str <= 122)
		str -= 32;
	return(str);
}

int	main(void)
{
	char	s[] = "caballo de la sabana";
	char	*new;
	
	new = ft_strmapi(s, my_toupper);

	printf("%s\n", new);
	return (0);
}
