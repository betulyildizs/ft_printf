NAME	= libftprintf.a
FILES	= ft_printf.c \
		  ft_datatype.c \
		  ft_printby.c \
		  ft_strfunc.c \
		  ft_countlen.c \

CC		= gcc

CFLAGS  = -Wall -Werror -Wextra

OFILES	= $(FILES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	ar -r -c $(NAME) $(OFILES)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re