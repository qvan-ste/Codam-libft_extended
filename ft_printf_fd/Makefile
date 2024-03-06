CFILES = ft_printf_fd.c src/print_basic_fd.c src/print_hex_fd.c \
		src/print_num_fd.c src/print_ptr_fd.c

OFILES = $(CFILES:.c=.o)

NAME = libftprintf_fd.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re