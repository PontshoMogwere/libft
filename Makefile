# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/09 14:38:38 by pmogwere          #+#    #+#              #
#    Updated: 2019/06/09 14:39:15 by pmogwere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra 
#SRC = ft_bzero.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_memcpy.c 
SRC = $(wildcard *.c)
#OFILE := $(patsubst %$(SRC) = .c,%.o,$(*.c))
OFILE = $(SRC:.c=.o)

all: $(NAME)
	ar rc $(NAME) $(OFILE) 
	
$(NAME) : cofile
	ar rcs $(NAME) $(OFILE) $(NAME)

cofile:
	gcc -c $(CFLAGS) $(SRC) 

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
