# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:42:32 by adiaz-lo          #+#    #+#              #
#    Updated: 2023/04/24 15:44:17 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

INCLUDE = libft.h

LIB = ar -rcs

RM = rm -f

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)


%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME) : $(OBJS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME) all
