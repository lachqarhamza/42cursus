#include "../ft_printf.h"

int			ft_manage(va_list args)
{
	if (global.c == 'u')
		return (ft_printu(global, args));
	if (global.c == 's')
		return (ft_prints(global, args));
	if (global.c == 'c')
		return (ft_printc(global, args));
	if (global.c == 'x' || global.c == 'X' || global.c == 'p')
		return (ft_printx(global, args));
	if (global.c == 'd' || global.c == 'i')
		return (ft_printd(global, args));
	if (global.c == '%')
		return (ft_printper(global));
	else
		return (0);
}