/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:31:03 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 17:48:21 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct	s_list
{
	char	c;
	char	f;
	int		p;
	int		w;
	int		pnt;
}				t_globals;

t_globals		g_global;
int				g_counter;

void			ft_init_globals(int with_counter);
int				ft_printf(char *format, ...);
int				ft_get_n_zr(long long num);
int				ft_is_c(char c);
int				ft_manage(va_list args);
void			ft_space_padding(int *res);
void			ft_xp(char *str, int *i, int *j);
void			ft_zero_padding(int *res, int *nzr);
void			manage_c(char **format, va_list args);
void			manage_f(char **format);
void			manage_p(char **format, va_list args);
void			manage_w(char **format, va_list args);
int				ft_put_per();
void			ft_print_d(long long num);
int				ft_put_d(va_list args);
int				ft_put_u(va_list args);
int				ft_put_x(va_list args);
int				ft_put_s(va_list args);
int				ft_put_c(va_list args);
int				ft_atoi(char *s);
int				ft_strlen(char *s);
int				ft_isdigit(char c);
char			*ft_upper(char *str);
char			*ft_itoa_base(unsigned long long n, unsigned int base);
void			ft_put_char(char **format);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_get_num(long long n, unsigned int base);
int				ft_get_num_x(unsigned long long n, unsigned int base);

#endif
