#include "../ft_printf.h"

void	ft_put_char(char **format)
{
	write(1, *format, 1);
	(*format)++;
	counter++;
}