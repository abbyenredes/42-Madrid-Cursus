#include "libft.h"

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