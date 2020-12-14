#include "../ft_printf.h"

void		ft_space_padding(int *res)
{
	if (global.f == '\0')
		while (global.w > (*res)++)
			write(1, " ", 1);
	if (global.f == '0' && global.p >= 0)
		while (global.w > (*res)++)
			write(1, " ", 1);
}