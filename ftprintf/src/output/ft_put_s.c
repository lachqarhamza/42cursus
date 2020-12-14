#include "../ft_printf.h"

int			ft_put_s(va_list args)
{
	int			res;
	char		*str;

	if (!(str = va_arg(args, char*)))
		str = "(null)";
	if (global.p < ft_strlen(str) && global.p >= 0)
		res = global.p;
	else
		res = ft_strlen(str);
	while (global.f != '-' && global.w > res++)
		write(1, " ", 1);
	if (global.p < ft_strlen(str) && global.p >= 0)
		write(1, str, global.p);
	else
		write(1, str, ft_strlen(str));
	while (global.f == '-' && global.w > res++)
		write(1, " ", 1);
	return (--res);
}