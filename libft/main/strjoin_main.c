/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:11:54 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/22 02:06:06 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Soy un pollito";
	char	str2[] = " mojado";

	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
