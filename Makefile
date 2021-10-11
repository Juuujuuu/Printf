# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#              #
#    Updated: 2021/10/11 17:25:35 by julmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
		
SRCS =	ft_printf.c \
				ft_printf_utils.c \
				ft_printf_utils_bis.c \
				ft_printf_functions.c\
				ft_printf_functions_bis.c \
				ft_parser.c
				
CC = gcc

AR = ar -rc

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -I. -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
