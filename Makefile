CFILES = $(wildcard src/libft/*.c) $(wildcard src/ft_printf/*.c) \
			$(wildcard src/ft_printf_fd/*.c) $(wildcard src/get_next_line/*.c)

OFILES = $(CFILES:.c=.o)
			
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re
