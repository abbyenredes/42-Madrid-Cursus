#include "ft_printf.h"

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

size_t	ft_hex_pointer(unsigned long long nbr, size_t *i, char *base)
{
	if (nbr > 15)
		ft_hex_pointer((nbr / 16), i, base);
	*i = *i + ft_putchar(base[nbr % 16]);
	return (*i);
}

size_t	ft_pointer(unsigned long long nbr, size_t *i, char *base)
{
	*i = *i + ft_putstr("0x");
	ft_hex_pointer(nbr, i, base);
	return (*i);
}