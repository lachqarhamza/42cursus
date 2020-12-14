#include "../ft_printf.h"

int			ft_put_u(va_list args)
{
	int				nzr;
	int				res;
	unsigned int	num;
	char			*str;

	num = va_arg(args, unsigned int);
	nzr = ft_get_n_zr(num);
	res = nzr + ft_get_num(num, 10);
	if (num == 0 && global.p == 0)
		res = 0;
	ft_space_padding(&res);
	ft_zero_padding(&res, &nzr);
	if (num != 0 || global.p != 0)
	{
		str = ft_itoa_base(num, 10);
		write(1, str, ft_get_num(num, 10));
		free(str);
		str = NULL;
	}
	while (global.f == '-' && global.w > res++)
		write(1, " ", 1);
	return (--res);
}