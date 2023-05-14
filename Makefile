# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 04:29:33 by hait-sal          #+#    #+#              #
#    Updated: 2022/12/19 17:11:40 by hait-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsigned.c ft_puthex.c

OBJ = ft_printf.o ft_putchar.o ft_putstr.o ft_putnbr.o ft_unsigned.o ft_puthex.o

all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	@echo finishing
	@ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	@echo compiling
	@gcc -Wall -Werror -Wextra -c $(SRC)

clean :
	@echo cleaning *.o
	@rm -f *.o

fclean : clean
	@echo removing libftprintf.a and *.o
	@rm -f libftprintf.a

re : fclean all