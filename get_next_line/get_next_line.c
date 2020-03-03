#include "get_next_line.h"

/* the main function : get next line */

int	get_next_line(int fd, char **line)
{
	char *buf;
	static char *saved;
	int res;
	ssize_t len;

	if (fd < 0 || !line)
		return (-1);
	if (buf = malloc((sizeof(char)) * BUFFER_SIZE))
		return (-1);
	copy_saved_to_line(line, saved);
	while (1)
	{
		len = read(fd, buf, BUFFER_SIZE);
		if(len < 0)
			return (-1);
		if (len == 0)
			return (0);
		res = manage_buf(buf, len, saved, line);
		if (res != 2)
		{
			free(buf);
			return (res);
		}

	}
}
