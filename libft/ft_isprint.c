/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:27:34 by abigamas          #+#    #+#             */
/*   Updated: 2023/09/25 21:27:37 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The isprint() function tests for any printing character, including space(` ')

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
