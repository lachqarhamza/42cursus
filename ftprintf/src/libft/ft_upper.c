#include "../ft_printf.h"

char	*ft_upper(char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = (char*)malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			res[i] = str[i] - 32;
		else
			res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}