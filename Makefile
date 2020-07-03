NAME: libft.a

CC = gcc;

CFLAGS = -Wall -Wextra -Werror -I. -c

SRC =	ft_memset.c
		ft_bzero.c
		ft_memcpy.c
		ft_memccpy.c

OBJ = $(SRC:.c=.o)

all: &(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re