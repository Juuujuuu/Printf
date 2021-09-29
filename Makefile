# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#              #
#    Updated: 2021/09/29 18:01:30 by julmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
		
SRCS =	ft_printf.c \
				
			
		
		

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
