/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:01:10 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 16:37:48 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	my_tolower(unsigned int c, char *s)
{
	char	*str;

	(void)c;
	str = s;
	if (*str >= 65 && *str <= 90)
		*str += 32;
}

void	my_toupper(unsigned int c, char *s)
{
	char	*str;

	(void)c;
	str = s;
	if (*str >= 97 && *str <= 122)
		*str -= 32;
}

int	main(void)
{
	char	str[] = "ser o no ser";

	ft_striteri(str, my_toupper);
	printf("%s\n", str);
	return (0);
}
