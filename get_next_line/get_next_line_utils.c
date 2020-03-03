#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int k;

	k = 0;
	while (s[k])
	{
		if ((char)s[k] == (char)c)
			return ((char *)s + k);
		k++;
	}
	if (s[k] == c)
		return ((char *)s + k);
	return (NULL);
}

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
			i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *result;
	int i;

	i = 0;
	if (!(result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) 
			* sizeof(char))))
		return (NULL);
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	int	counter;
	int	n;
	char	*str;

	counter = 0;
	n = 0;
	while (s[n])
		n++;
	if (!(str = malloc((n + 1) * sizeof(char))))
		return (NULL);
	while (s[counter])
	{
		str[counter] = s[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

int	check_saved(char **saved, char **line)
{
	char *ptr;

	if (!*saved)
		return(0);
	if ((ptr = ft_strchr(*saved, '\n')))
	{
			*ptr = '\0';
			*line = ft_strjoin(*line, *saved);
			*saved = ft_strdup(ptr + 1);
			return (1);
	}
	*line = ft_strjoin(*line, *saved);
	return (0);
}

int	check_buff(char **saved, char **line, char *buff)
{
	char *ptr;

	if ((ptr = ft_strchr(buff, '\n')))
	{
		*ptr = '\0';
		*line = ft_strjoin(*line, buff);
		*saved = ft_strdup(ptr + 1);
		return (1);
	}
	*line = ft_strjoin(*line, buff);
	return (0);
}
