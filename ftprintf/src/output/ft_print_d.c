#include "../ft_printf.h"

void	ft_print_d(long long num)
{
	char		*str;

	str = ft_itoa_base(num, 10);
	write(1, str, ft_get_num((int)num, 10));
	free(str);
	str = NULL;
}