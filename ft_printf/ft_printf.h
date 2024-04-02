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
size_t	ft_pointer(unsigned long long nbr, size_t *i, char *base);
int		ft_printf(char const *str, ...);
size_t	flag_type(va_list args, char const str);
size_t	ft_hex_pointer(unsigned long long nbr, size_t *i, char *base);

#endif