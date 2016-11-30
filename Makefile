# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmillero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 10:56:51 by xmillero          #+#    #+#              #
#    Updated: 2016/11/29 10:25:58 by xmillero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
AR=ar
ARFLAGS=rc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC=ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_isalpha.c \
   	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c ft_memcpy.c \
	ft_memccpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_toupper.c ft_tolower.c \
	ft_memchr.c ft_memcmp.c ft_strcat.c ft_strncat.c ft_putstr.c ft_putchar.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strstr.c ft_strnstr.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
	ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_strsnbmot.c \
	ft_itoa.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(SRC)
	$(CC) -c $(SRC) $(CFLAGS)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
