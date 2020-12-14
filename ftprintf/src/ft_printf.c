int			ft_printf(char *format, ...)
{
	va_list			args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			ft_put_char(format);
		else
		{
			manage_f(format);
			manage_w(format);
			manage_p(format);
			manage_c(format);
		}
	}
	va_end(ars); // i am not sure that i didn't call it somewhere else
	return (counter);
}
