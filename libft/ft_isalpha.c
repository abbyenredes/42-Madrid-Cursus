/*The isalpha() function tests for any character for which isupper() or
  islower() is true. The value of the argument must be representable as
  an unsigned char or the value of EOF.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
