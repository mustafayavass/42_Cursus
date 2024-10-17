# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myavas <myavas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 17:56:31 by myavas            #+#    #+#              #
#    Updated: 2024/10/17 14:04:59 by myavas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_isalpha.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
		ft_strncmp.c\

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re