/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:50:53 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/16 15:51:26 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	flag_type(va_list args, char const str)
{
	size_t	i;

	i = 0;
	if (str == 'c')
		return (ft_putchar(va_arg(args, size_t)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_hex_pointer(va_arg(args, unsigned long long), &i, \
		"0123456789abcdef", 'p'));
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, size_t), &i));
	else if (str == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int), &i));
	else if (str == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), &i, \
		"0123456789abcdef"));
	else if (str == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), &i, \
		"0123456789ABCDEF"));
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	size_t	printed_char;
	va_list	args;
	size_t	i;

	i = 0;
	printed_char = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed_char += flag_type(args, str[i + 1]);
			i++;
		}
		else
			printed_char += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return ((int) printed_char);
}
