# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/19 20:30:21 by hlachqar          #+#    #+#              #
#    Updated: 2020/12/20 03:17:56 by hlachqar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = libft/ft_atoi.c libft/ft_isdigit.c libft/ft_itoa_base.c libft/ft_strlen.c\
       libft/ft_strncmp.c libft/ft_upper.c\
       output/ft_print_d.c output/ft_put_c.c output/ft_put_char.c\
       output/ft_put_d.c output/ft_put_per.c output/ft_put_s.c output/ft_put_u.c\
       output/ft_put_x.c\
       parsers/ft_manage.c parsers/manage_c.c parsers/manage_f.c\
       parsers/manage_p.c parsers/manage_w.c\
       utils/ft_get_num.c utils/ft_get_num_x.c utils/ft_get_n_zr.c\
       utils/ft_init_globals.c utils/ft_is_c.c utils/ft_space_padding.c\
       utils/ft_xp.c utils/ft_zero_padding.c\
       ft_printf.c

OBJS = ft_atoi.o ft_isdigit.o ft_itoa_base.o ft_strlen.o ft_strncmp.o ft_upper.o\
       ft_print_d.o ft_put_c.o ft_put_char.o\
       ft_put_d.o ft_put_per.o ft_put_s.o ft_put_u.o\
       ft_put_x.o\
       ft_manage.o manage_c.o manage_f.o\
       manage_p.o manage_w.o\
       ft_get_num.o ft_get_num_x.o ft_get_n_zr.o\
       ft_init_globals.o ft_is_c.o ft_space_padding.o\
       ft_xp.o ft_zero_padding.o\
       ft_printf.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
