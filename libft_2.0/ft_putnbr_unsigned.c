/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:53:56 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/16 15:54:23 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_unsigned(unsigned int n, size_t *i)
{
	unsigned long long	k;

	k = (unsigned long long) n;
	if (k > 9)
	{
		ft_putnbr_unsigned(k / 10, i);
		ft_putnbr_unsigned(k % 10, i);
	}
	else
		*i = *i + ft_putchar(k + '0');
	return (*i);
}
