# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: boyola <boyola@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 14:30:16 by boyola            #+#    #+#              #
#    Updated: 2020/02/23 17:51:17 by boyola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memcpy.c \
ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strrchr.c \
ft_tolower.c ft_toupper.c
OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memcpy.o \
ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strrchr.o \
ft_tolower.o ft_toupper.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
