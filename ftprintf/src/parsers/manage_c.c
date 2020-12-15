#include "../ft_printf.h"

void    manage_c(char **format, va_list args)
{
    if (ft_is_c(**format))
    {
        global.c = **format;
        counter += ft_manage(args);
    }
    (*format)++;
}