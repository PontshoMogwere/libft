# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/09 14:38:38 by pmogwere          #+#    #+#              #
#    Updated: 2019/06/14 12:01:25 by pmogwere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
SRC = $(wildcard ft_*.c)
OFILE = $(SRC:.c=.o)

all: $(NAME)
	
$(NAME) : cofile
	ar rcs $(NAME) $(OFILE) 

cofile:
	$(CC)  $(CFLAGS) $(SRC) 

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
