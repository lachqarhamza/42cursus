#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# define BUFFER_SIZE 32
int	get_next_line(int fd, char **line);
void	save_rest(char *buf ,ssize_t len, char *saved);
void	copy_buf_to_line(char *buf, ssize_t len, char **line, char c);
char	find_new_end_line(char *buf, ssize_t len);
int	manage_buf(char *buf, ssize_t len, char *s, char **l);
void	copy_saved_to_line(char *saved, char **line);

#endif
