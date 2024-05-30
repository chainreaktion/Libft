# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 12:01:20 by jschmitz          #+#    #+#              #
#    Updated: 2024/05/30 17:02:33 by jschmitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c t_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd 

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 


SRCSTOTAL = ${SRCS} ${BONUS}

OBJ = $(SRCS:.c=.o)

OBJTOTAL = $(SRCSTOTAL:.c=.o)

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

AR = ar -rcs

all = $(NAME)

$(NAME) : $(OBJ)
	${AR} $@ $^

%.o : %.c
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	$(RM) $(OBJTOTAL)

fclean:	clean
	$(RM) $(NAME) 

re: fclean all

bonus : $(OBJTOTAL)
	$(AR) $(NAME) $(OBJTOTAL)

.PHONY: re clean fclean all bonus
