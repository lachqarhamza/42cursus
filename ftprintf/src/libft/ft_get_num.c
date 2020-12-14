#include "../ft_printf.h"

int			ft_get_num(long long n, unsigned int base)
{
	int			num;

	if (n == 0)
		return (1);
	num = 0;
	while (n != 0)
	{
		n /= base;
		num++;
	}
	return (num);
}