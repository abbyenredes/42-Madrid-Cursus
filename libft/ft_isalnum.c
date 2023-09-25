/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:25:10 by abigamas          #+#    #+#             */
/*   Updated: 2023/09/25 21:25:14 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function tests for any character for which isalpha() or isdigit() is true

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122));
}
