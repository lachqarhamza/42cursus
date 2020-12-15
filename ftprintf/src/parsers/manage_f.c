#include "../ft_printf.h"

void    manage_f(char **format)
{
    (*format)++;
    while (**format == '-' || **format == '0')
    {
        if (**format == '0' && global.f != '-')
        {
            global.f = '0';
        }
        else
        {
            global.f = '-';
        }
        (*format)++;
    }
}