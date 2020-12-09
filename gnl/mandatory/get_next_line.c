/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:39:39 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/09 12:39:41 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char		*saved;
	char			*buff;
	int				rd;

	if (fd < 0 || read(fd, NULL, 0) < 0 || line == NULL
		|| BUFFER_SIZE >= 2147483647 || BUFFER_SIZE <= 0)
		return (-1);
	*line = ft_strdup("");
	if (check_saved(&saved, line))
		return (1);
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((rd = read(fd, buff, BUFFER_SIZE)))
	{
		buff[rd] = '\0';
		if (check_buff(&saved, line, buff))
		{
			free(buff);
			return (1);
		}
	}
	free(saved);
	free(buff);
	saved = NULL;
	return (0);
}

int	check_saved(char **saved, char **line)
{
	char *ptr;
	char *tmp;

	ptr = NULL;
	tmp = NULL;
	if (!*saved)
		return (0);
	if ((ptr = ft_strchr(*saved, '\n')))
	{
		*ptr = '\0';
		tmp = ft_strdup(*line);
		free(*line);
		*line = ft_strjoin(tmp, *saved);
		free(tmp);
		tmp = ft_strdup(ptr + 1);
		free(*saved);
		*saved = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
	tmp = ft_strdup(*line);
	free(*line);
	*line = ft_strjoin(tmp, *saved);
	free(tmp);
	return (0);
}

int	check_buff(char **saved, char **line, char *buff)
{
	char *ptr;
	char *tmp;

	ptr = NULL;
	tmp = NULL;
	if ((ptr = ft_strchr(buff, '\n')))
	{
		*ptr = '\0';
		tmp = ft_strdup(*line);
		free(*line);
		*line = ft_strjoin(tmp, buff);
		free(tmp);
		tmp = ft_strdup(ptr + 1);
		free(*saved);
		*saved = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
	tmp = ft_strdup(*line);
	free(*line);
	*line = ft_strjoin(tmp, buff);
	free(tmp);
	return (0);
}
