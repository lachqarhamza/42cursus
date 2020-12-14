#include "../ft_printf.h"

int		ft_atoi(char *s)
{
	int		i;
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		res = 10 * res + (s[i] - 48);
		i++;
	}
	return (res * sign);
}