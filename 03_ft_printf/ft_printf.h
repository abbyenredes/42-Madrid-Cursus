/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:30:14 by abigamas          #+#    #+#             */
/*   Updated: 2024/04/05 20:19:16 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

size_t	ft_putstr(char *str);
size_t	ft_putchar(char c);
size_t	ft_putnbr_unsigned(unsigned int n, size_t *i);
size_t	ft_putnbr(int n, size_t *i);
size_t	ft_putnbr_hex(unsigned int nbr, size_t *i, char *base);
int		ft_printf(char const *str, ...);
size_t	flag_type(va_list args, char const str);
size_t	ft_hex_pointer(unsigned long long nbr, size_t *i, char *base, char c);

#endif
