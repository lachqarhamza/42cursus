#include "../ft_printf.h"

t_globals	global;
int			counter;

void    ft_init_globals()
{
    global.c = '\0';
	global.f = '\0';
	global.w = -1;
	global.p = -1;
	global.pnt = -1;
	counter = 0;
}