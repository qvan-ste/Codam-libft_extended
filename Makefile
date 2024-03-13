RED =\033[0;31m
ORANGE=\033[0;33m
GREEN =\033[0;32m
NO_COLOUR =\033[0m

CFILES = $(wildcard src/libft/*.c) $(wildcard src/ft_printf/*.c) \
			$(wildcard src/ft_printf_fd/*.c) $(wildcard src/get_next_line/*.c)

OFILES = $(CFILES:.c=.o)
			
CFLAGS = -Wall -Wextra -Werror

CC = cc

NAME = libft.a

all: $(NAME)

.c.o:
	@echo "${ORANGE}[libft] Compiling $<${NO_COLOUR}"
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@echo "${GREEN}[libft] Compiling finished${NO_COLOUR}"

clean:
	@rm -f $(OFILES)
	@echo "${RED}[libft] Removing .o files${NO_COLOUR}"

fclean:  clean
	@rm -f $(NAME)
	@echo "${RED}[libft] Removing libft.a${NO_COLOUR}"

re: fclean all

.PHONY:  all clean fclean re
