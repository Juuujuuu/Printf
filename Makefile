# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#              #
#    Updated: 2021/09/08 15:13:04 by julmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCSB = ft_lstnew.c				\
		ft_lstadd_front.c		\
		ft_lstsize.c			\
		ft_lstlast.c			\
		ft_lstadd_back.c		\
		ft_lstdelone.c			\
		ft_lstclear.c			\
		ft_lstiter.c			

SRCS =	ft_atoi.c 					\
		ft_bzero.c 					\
		ft_calloc.c 				\
		ft_isalnum.c 				\
		ft_isalpha.c 				\
		ft_isascii.c 				\
		ft_isdigit.c 				\
		ft_isprint.c 				\
		ft_itoa.c					\
		ft_memccpy.c 				\
		ft_memchr.c 				\
		ft_memcmp.c 				\
		ft_memcpy.c 				\
		ft_memmove.c 				\
		ft_memset.c 				\
		ft_strchr.c 				\
		ft_strdup.c 				\
		ft_strlcat.c 				\
		ft_strlcpy.c 				\
		ft_strlen.c 				\
		ft_strncmp.c 				\
		ft_strnstr.c 				\
		ft_strrchr.c 				\
		ft_tolower.c 				\
		ft_toupper.c				\
		ft_substr.c					\
		ft_strjoin.c				\
		ft_strtrim.c				\
		ft_split.c					\
		ft_putchar_fd.c				\
		ft_putstr_fd.c				\
		ft_putendl_fd.c				\
		ft_putnbr_fd.c				\
		ft_strmapi.c				

CC = gcc

AR = ar -rc

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.c=.o)

OBJB = $(SRCSB:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -I. -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJB)
	@$(AR) $(NAME) $(OBJ) $(OBJB)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
