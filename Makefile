GREEN =\033[0;32m
RED =\033[0;31m
NO_COLOUR =\033[0m

CFILES = $(wildcard src/libft/*.c) $(wildcard src/ft_printf/*.c) \
			$(wildcard src/ft_printf_fd/*.c) $(wildcard src/get_next_line/*.c)

OFILES = $(CFILES:.c=.o)
			
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o:
	@echo "[libft] Compiling: $<"
	@CC -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@echo "${GREEN}[libft] Libft compiled${NO_COLOUR}"

clean:
	@rm -f $(OFILES)
	@echo "${RED}[libft] Removing .o files${NO_COLOUR}"

fclean:  clean
	@rm -f $(NAME)
	@echo "${RED}[libft] Removing .a file${NO_COLOUR}"

re: fclean all

.PHONY:  all clean fclean re
