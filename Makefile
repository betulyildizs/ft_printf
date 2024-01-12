NAME	= libftprintf.a
FILES	= ft_printf.c \
		  ft_datatype.c \
		  ft_printby.c \
		  ft_strfunc.c \

CC		= gcc
CFLAGS  = -Wall -Werror -Wextra
OFILES	= $(FILES:.c=.o)

$(NAME): $(OFILES)
		ar rcs $@ $^

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
