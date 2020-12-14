#include "../ft_printf.h"

void		ft_zero_padding(int *res, int *nzr)
{
	while ((*nzr)--)
		write(1, "0", 1);
	if (global.f == '0' && global.p < 0)
		while (global.w > (*res)++)
			write(1, "0", 1);
}