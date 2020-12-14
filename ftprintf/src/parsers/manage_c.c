#include "../ft_printf.h"

char    *manage_c(char *format)
{
    if (is_c(*format))
    {
        global->c = *format;
        counter += ft_manage(args);
    }
    format++;
    return (format);
}