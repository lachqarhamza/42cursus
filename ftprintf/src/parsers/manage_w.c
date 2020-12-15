#include "../ft_printf.h"

char    *manage_w(char *format, va_list args)
{
    while (*format == ' ')
    {
        write(1, " ", 1);
        format++;
    }
    if (*format == '*')
    {
        global.w = va_arg(args, int);
        if (global.w < 0)
            global.f = '-';
        while (*format == '*')
            format++;
    }
    else
    {
        global.w = ft_atoi(format);
        while (ft_isdigit(*format))
            format++;
    }
    if (global.w < 0)
    {
        global.w = global.w * -1;
        global.f = '-';
    }
    return (format);
}