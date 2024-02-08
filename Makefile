NAME	= libftprintf.a
FILES	= ft_printf.c \
		  ft_datatype.c \
		  ft_printfunc.c \
		  ft_strfunc.c \
		  ft_countlen.c \
		  ft_printptr.c \
		  ft_printhex.c \
		  ft_printby.c \
		  ft_printf.c \

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
