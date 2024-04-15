#include "libft.h"

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