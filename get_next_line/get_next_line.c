#include "get_next_line.h"

static void	save_rest(char *buf ,int len, char *saved)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (i < len)
		saved[j++] = buf[i++];
	saved[j] = '\n';
}

/*
 * add the buffer to the end of the line in all cases:
 * # if the last parameter is '\n' : it stops adding and adds
 *   a '\n' to the end of the line
 * # if the last parameter is EOF : it stops adding and adds
 *   a '\n' to the end of the line
 * # any other case : copy all the buffer and add a '\n' to
 *   the end of line
 **/

static void	copy_buf_to_line(char *buf, int len, char *line, char c)
{
	int i;
	int j;

	i = 0;
	while (line[i])
		if (line[i] == '\n')
			break;
	j = -1;
	while (++j < len && buf[j] != c)
		line [i++] = buf[j];
	line[j] = '\n';
}

/* search for new line or end of file and returs :
 * # if new line exist : return n
 * # if end of file exist : returns e
 * # if there is no end of file and no new line : returns c*/

static char	find_new_end_line(char *buf, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (buf[i] == '\n')
			return ('n');
		else if (buf[i] == '\0')
			return ('e');
	}
	return ('c');
}

/* # if there is a new line in the buffer : adds the bufer to the end
 *   of line, saves the rest to the static variable and returns 1
 * # if there is end of file : adds the bufer to the end of line and
 *   returns 0
 * # if there is no end of line and no new line in the buffer : adds
 *   all the buffer to the end of line and returns 2*/

static int	manage_buf(char *buf, int len, char *s, char *l)
{
	char res;

	res = find_new_end_line(buf, len);
	if (res == 'c')
	{
		copy_buf_to_line(buf, len, l, '\0');
		return (2);
	}
	else if (res == 'e')
	{
		copy_buf_to_line(buf, len, l, '\0');
		return (0);
	}
	else if (res == 'n')
	{
		copy_buf_to_line(buf, len, l, '\n');
		save_rest(saved, buf);
		return (1);
	}
}

static void	copy_saved_to_line(char *saved, char *line)
{
	int i;

	i = 0;
	while (saved[i] != '\0')
		line[i] = saved[i++];
	line[i] = '\n';
}

int	get_next_line(int fd, char **line)
{
	char *buf;
	static char *saved;
	int res;
	int len;

	if (fd < 0 || line == NULL)
		return (-1);
	if (buf = malloc((sizeof(char)) * BUFFER_SIZE))
		return (-1);
	copy_saved_to_line(line, saved);
	while (1)
	{
		len = read(fd, buf, BUFFER_SIZE);
		if(len < 0)
			return (-1);
		res = manage_buf(buf, len, saved, line);
		if (res != 2)
		{
			free(buf);
			return (res);
		}
		buf = NULL;

	}
}
