#include "ft_printf.h"

int			ft_printf(char *format, ...)
{
	va_list			args;

	va_start(args, format);
	counter = 0;
	ft_init_globals();
	while (*format)
	{
		if (*format != '%')
			ft_put_char(format);
		else
		{
			manage_f(format);
			manage_w(format, args);
			manage_p(format, args);
			manage_c(format, args);
		}
	}
	va_end(args);
	return (counter);
}
