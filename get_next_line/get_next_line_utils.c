#include "get_next_line.h"

/* after copying the first part of the buffer (up to new line)
 * this function come to finish the task by saving the rest of
 * the data from the buffer to the saved variable and adds
 * end of string to the end of the saved variable */

void	save_rest(char *buf ,ssize_t len, char *saved)
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
	saved[j] = '\0';
}

/*
 * add the buffer to the end of the line in all cases:
 * # if the last parameter is '\n' : it stops add
 * ing and adds
 *   a '\0' to the end of the line
 * # if the last parameter is EOF : it stops adding and adds
 *   a '\0' to the end of the line
 * # any other case : copy all the buffer and add a '\0' to
 *   the end of line
 **/

void	copy_buf_to_line(char *buf, ssize_t len, char **line, char c)
{
	int i;
	int j;

	i = 0;
	while ((*line)[i])
		i++;
	j = 0;
	while (j < len && buf[j] != c)
		(*line)[i++] = buf[j++];
	(*line)[i] = '\0';
}

/* search for new line or end of file and returs :
 * # if new line exist : return n
 * # if end of file exist : returns e
 * # if there is no end of file and no new line : returns c*/

char	find_new_end_line(char *buf, ssize_t len)
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

int	manage_buf(char *buf, ssize_t len, char *s, char **l)
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
/* copys the saved part to the begening of the line,
 * if we are in the first call of get next line (saved == NULL)
 * we should do nothing, otherwise (there something in saved)
 * we do the task of copying */

void	copy_saved_to_line(char *saved, char **line)
{
	int i;

	i = 0;
	while (saved[i] != '\0')
		(*line)[i] = saved[i++];
	(*line)[i] = '\0';
}

