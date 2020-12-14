#include "../ft_printf.h"

int			ft_put_x(va_list args)
{
	int			nzr;
	int			res;
	char		*str;

	res = 0;
	if (global.c == 'p')
	{
		str = ft_itoa_base(va_arg(args, size_t), 16);
		res += 2;
	}
	else
		str = ft_itoa_base(va_arg(args, unsigned int), 16);
	nzr = 0;
	if (global.p >= ft_strlen(str))
		nzr = global.p - ft_strlen(str);
	res = res + nzr + ft_strlen(str);
	if (!ft_strncmp(str, "0", 2) && global.pnt > 0 && !global.p)
		res--;
	ft_space_padding(&res);
	ft_xp(str, &res, &nzr);
	free(str);
	str = NULL;
	while (global.f == '-' && global.w > res++)
		write(1, " ", 1);
	return (--res);
}