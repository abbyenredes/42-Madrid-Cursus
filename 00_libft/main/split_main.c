/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:51:30 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/25 15:04:06 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

int main(void)
 {
 	char	**result;

 	result = ft_split("....soy...un..pollito..mojado", '.');
 	while (*result != '\0')
 	{
 		printf("%s\n",*result);
 		result++;
 	}
 	return 0;
 }
