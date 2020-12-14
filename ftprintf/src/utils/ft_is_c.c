#include "../ft_printf.h"

int		ft_is_c(char c)
{
	if (c == '%' || c == 'd' || c == 'i' || c == 'c' || c == 'u')
		return (1);
	if (c == 'x' || c == 'X' || c == 'p' || c == 's')
		return (1);
	else
		return (0);
}