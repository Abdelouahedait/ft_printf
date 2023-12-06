SRC = ft_putchar.c	ft_putstr.c  ft_printf.c	ft_putnbr_baze.c	\
        ft_strlen.c		ft_putu.c	ft_putad.c  ft_puthexa.c


CFLAGS = -Wall -Wextra -Werror
CC = cc

OBJ = $(SRC:.c=.o)


NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
