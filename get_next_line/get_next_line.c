#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int         i;
	static char *saved[MAX_FD];
	char        *buff;
	int         rd;
	char	    *ptr;

	i = 0;
	*line = ft_strdup("");
	if (check_saved(&saved[fd], line))
		return (1);
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
	while ((rd = read(fd, buff, BUFFER_SIZE)))
	{
		buff[rd] = '\0';
		if (check_buff(&saved[fd], line, buff))
			return (1);
	}
	return (0);
}
