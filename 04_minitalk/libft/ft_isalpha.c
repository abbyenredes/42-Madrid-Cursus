/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:04:48 by abigamas          #+#    #+#             */
/*   Updated: 2024/03/14 21:39:09 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalpha() function tests for any character for which isupper() or 
  islower() is true.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
