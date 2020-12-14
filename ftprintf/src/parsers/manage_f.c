#include "../ft_printf.h"

char    *manage_f(char *format)
{
    while (*format == '-' || *format == '0')
    {
        if (*format == '0' && global->f != '-')
        {
            global->f = '0';
        }
        else
        {
            global->f = '-';
        }
        format++;
    }
    return (format);
}