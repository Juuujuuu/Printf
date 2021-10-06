# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#              #
#    Updated: 2021/10/06 13:27:41 by julmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
		
SRCS =	ft_printf.c \
		ft_printf_utils.c
				
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
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
