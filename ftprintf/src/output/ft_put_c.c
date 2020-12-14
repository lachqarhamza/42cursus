#include "../ft_printf.h"

int			ft_put_c(va_list args)
{
	char		c;
	int			res;

	res = 1;
	c = va_arg(args, int);
	while (global.f != '-' && global.w > res++)
		write(1, " ", 1);
	write(1, &c, 1);
	while (global.f == '-' && global.w > res++)
		write(1, " ", 1);
	return (--res);
}