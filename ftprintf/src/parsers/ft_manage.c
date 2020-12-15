#include "../ft_printf.h"

int			ft_manage(va_list args)
{
	if (global.c == 'u')
		return (ft_put_u(args));
	if (global.c == 's')
		return (ft_put_s(args));
	if (global.c == 'c')
		return (ft_put_c(args));
	if (global.c == 'x' || global.c == 'X' || global.c == 'p')
		return (ft_put_x(args));
	if (global.c == 'd' || global.c == 'i')
		return (ft_put_d(args));
	if (global.c == '%')
		return (ft_put_per());
	else
		return (0);
}