#include "../ft_printf.h"

void		ft_xp(char *str, int *i, int *j)
{
	char	*s;

	if (global.c == 'p')
		write(1, "0x", 2);
	ft_zeropadding(global, i, j);
	if (!ft_strncmp(str, "0", 2) && global.pnt > 0
	&& !global.p)
	{
	}
	else
	{
		if (global.c == 'x' || global.c == 'p')
		{
			write(1, str, ft_strlen(str));
		}
		else
		{
			s = ft_upper(str);
			write(1, s, ft_strlen(s));
			free(s);
			s = NULL;
		}
	}
}