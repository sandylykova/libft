# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: boyola <boyola@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 14:30:16 by boyola            #+#    #+#              #
#    Updated: 2020/02/27 20:59:26 by boyola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memcpy.c \
ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_memmove.c ft_strstr.c ft_memchr.c ft_strlcat.c ft_memcmp.c ft_strnstr.c ft_memalloc.c \
ft_putnbr.c ft_putchar.c ft_putstr.c ft_putend.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strnew.c ft_strdel.c ft_strclr.c \
ft_strset.c ft_striter.c ft_striteri.c  ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c  ft_strsub.c ft_strjoin.c \
ft_strtrim.c ft_strsplit.c ft_count_symb_word.c

OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memcpy.o \
ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strrchr.o \
ft_tolower.o ft_toupper.o ft_memmove.o ft_strstr.o ft_memchr.o ft_strlcat.o ft_memcmp.o ft_strnstr.o ft_memalloc.o \
ft_putnbr.o ft_putchar.o ft_putstr.o ft_putend.o ft_putchar_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_strnew.o ft_strdel.o ft_strclr.o \
ft_strset.o ft_striter.o ft_striteri.o  ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o  ft_strsub.o ft_strjoin.o \
ft_strtrim.o ft_strsplit.o ft_count_symb_word.o

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
