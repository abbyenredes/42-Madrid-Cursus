/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:51:46 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/16 15:52:11 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hex_pointer(unsigned long long nbr, size_t *i, char *base, char c)
{
	if (c == 'p')
		*i = *i + ft_putstr("0x");
	if (nbr > 15)
		ft_hex_pointer((nbr / 16), i, base, 'n');
	*i = *i + ft_putchar(base[nbr % 16]);
	return (*i);
}
