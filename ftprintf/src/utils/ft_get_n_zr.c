#include "../ft_printf.h"

int		ft_get_n_zr(long long num)
{
	if (global.p < ft_get_num(num, 10))
		return (0);
	else
		return (global.p - ft_get_num(num, 10));
}