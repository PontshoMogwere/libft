
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra 
#SRC = ft_bzero.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_memcpy.c 
SRC = $(wildcard *.c)
#OFILE := $(patsubst %$(SRC) = .c,%.o,$(*.c))
OFILE = $(SRC:.c=.o)

all: cofile
	ar rc $(NAME) $(OFILE)
cofile:
	gcc -c $(SRC) $(CFLAGS) 

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
