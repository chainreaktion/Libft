# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 12:01:20 by jschmitz          #+#    #+#              #
#    Updated: 2024/05/28 10:34:51 by jschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SUBJ = 

OBJ =

BONUS = 

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
	ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
	ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c \
	ft_toupper.c ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c \
	ft_strnstr.c

RM = rm -f

all = $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $@ $^

${SRCS}%.o : ${SRCS}%.c
	${CC} ${CFLAGS} -I${INCLUDES} -o $@ -c $<

clean:

fclean:	clean
	RM $(OBJ) 

re: fclean all

bonus: 

.PHONY: re clean fclean all
