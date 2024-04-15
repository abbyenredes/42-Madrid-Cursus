/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:56:35 by abigamas          #+#    #+#             */
/*   Updated: 2023/09/25 21:26:29 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function tests for an ASCII character, which is any  character
//between 0 and octal 0177 inclusive.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
