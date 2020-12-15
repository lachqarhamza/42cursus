NAME = libftprintf.a

SRCS = libft/*.c output/*.c parsers/*.c utils/*.c ft_printf.c
# ft_atoi.c ft_get_num_x.c ft_get_num.c ft_isdigit.c ft_itoa_base.c\
		ft_put_char.c ft_strlen.c ft_strncmp.c ft_upper.c\
		ft_print_d.c ft_put_c.c ft_put_d.c ft_put_per.c\
		ft_put_s.c ft_put_u.c ft_put_x.c\
		manage_c.c manage_f.c manage_p.c manage_w.c\
		ft_get_n_zr.c ft_init_globals.c ft_is_c.c ft_manage.c\
		ft_space_padding.c ft_xp.c ft_zero_padding.c\
		ft_printf.c

OBJS = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
