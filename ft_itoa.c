#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	unsigned int	i;
	unsigned int	sign;

	str = malloc(sizeof(char) * 12);
	if (!str)
		return (0);
	if (n < 0)
		sign = - 1;
	else
		sign = 1;
	i = sign * n;
	while (i != 0)
		i++;
	return (&str[0]);
}
