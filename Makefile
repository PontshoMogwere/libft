
LIB = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
SRC = ft_bzero.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_memcpy.c 
OFILE = $(patsubst$(SRC:%.c%.o)

all: $(NAME)

$(NAME): $(CON)
	ar rc $(LIB) OFILE 

$(CON):
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm *.o

fclean: clean
	rm $(LIB)

re: fclean all
