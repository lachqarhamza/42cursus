#include "../ft_printf.h"

char		*ft_itoa_base(unsigned long long n, unsigned int base)
{
	char			*res;
	unsigned int	num;

	num = ft_get_num_x(n, base);
	if (!(res = (char*)malloc((num + 1) * sizeof(char))))
		return (NULL);
	res[num] = '\0';
	while (num)
	{
		if ((n % base) <= 9)
			res[num - 1] = '0' + (n % base);
		else
			res[num - 1] = 'a' + (n % base) - 10;
		num--;
		n /= base;
	}
	return (res);
}