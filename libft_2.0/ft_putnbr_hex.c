#include "libft.h"

size_t	ft_putnbr_hex(unsigned int nbr, size_t *i, char *base)
{
	unsigned long long	k;

	k = (unsigned long long) nbr;
	if (k > 15)
		ft_putnbr_hex((k / 16), i, base);
	*i = *i + ft_putchar(base[k % 16]);
	return (*i);
}