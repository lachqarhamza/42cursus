/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:58:20 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/03 16:59:06 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# define MAX_FD 1024

int			get_next_line(int fd, char **line);
char		*ft_strchr(const char *s, int c);
int			ft_strlen(const char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(const char *s);
int			check_saved(char **saved, char **line);
int			check_buff(char **saved, char **line, char *buff);

#endif
