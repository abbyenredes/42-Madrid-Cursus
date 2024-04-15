#include "libft.h"

size_t	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}