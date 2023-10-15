# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 23:40:02 by tbezerra          #+#    #+#              #
#    Updated: 2023/10/15 14:15:47 by tbezerra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER=libft.h
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
#SRC = $(wildcard ft_*.c)
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c\
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
		ft_tolower.c ft_toupper.c
OBJ= $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -I$(HEADER) -c $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all bonus