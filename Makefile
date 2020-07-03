# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agazquez <agazquez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/03 21:03:03 by agazquez          #+#    #+#              #
#    Updated: 2020/07/03 21:03:03 by agazquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_isalpha.c ft_memccpy.c \
	ft_memcpy.c \

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re