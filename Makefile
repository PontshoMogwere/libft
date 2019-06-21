# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/09 14:38:38 by pmogwere          #+#    #+#              #
#    Updated: 2019/06/21 14:46:38 by pmogwere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c -I .
SRC = $(wildcard *.c)
OFILE = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILE)
	ar rc $(NAME) $(OFILE) 

$(OFILE): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
