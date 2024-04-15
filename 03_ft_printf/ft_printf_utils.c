/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:29:52 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/10 01:59:19 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	i;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

size_t	ft_putnbr(int n, size_t *i)
{
	if (n == INT_MIN)
	{
		*i = *i + ft_putchar('-');
		*i = *i + ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		*i = *i + ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, i);
		ft_putnbr(n % 10, i);
	}
	else
		*i = *i + ft_putchar(n + '0');
	return (*i);
}

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

size_t	ft_putnbr_hex(unsigned int nbr, size_t *i, char *base)
{
	unsigned long long	k;

	k = (unsigned long long) nbr;
	if (k > 15)
		ft_putnbr_hex((k / 16), i, base);
	*i = *i + ft_putchar(base[k % 16]);
	return (*i);
}

size_t	ft_hex_pointer(unsigned long long nbr, size_t *i, char *base, char c)
{
	if (c == 'p')
		*i = *i + ft_putstr("0x");
	if (nbr > 15)
		ft_hex_pointer((nbr / 16), i, base, 'n');
	*i = *i + ft_putchar(base[nbr % 16]);
	return (*i);
}