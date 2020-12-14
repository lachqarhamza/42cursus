#include "../ft_printf.h"

int		ft_put_per()
{
	int			res;

	res = 1;
	while (global.f == '0' && global.w > res)
	{
		write(1, "0", 1);
		res++;
	}
	while (global.f != '-' && global.w > res)
	{
		write(1, " ", 1);
		res++;
	}
	write(1, "%", 1);
	while (global.f == '-' && global.w > res)
	{
		write(1, " ", 1);
		res++;
	}
	return (res);
}