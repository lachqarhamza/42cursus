#include "../ft_printf.h"

char    *manage_p(char *format, va_list args)
{
    if (*format == '.')
    {
        format++;
        if (*format == '*')
        {
            global->p = va_arg(args, int);
            while (*format == '*')
                format++;
        }
        else
        {
            global->p = ft_atoi(format);
            while (ft_isdigit(*format))
                format++;
        }
        global->pnt = 1;
    }
    return (format);
}