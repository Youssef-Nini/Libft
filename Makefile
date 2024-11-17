# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynini <ynini@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 14:49:22 by ynini             #+#    #+#              #
#    Updated: 2024/11/14 16:46:08 by ynini            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o \
ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o \
ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o \
ft_putendl_fd.o ft_putnbr_fd.o

BONUS_OBJ = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME) : $(OBJ)
	ar rs $(NAME) $^

bonus: $(BONUS_OBJ)
	ar rs $(NAME) $(BONUS_OBJ)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean

	rm -f $(NAME)

re: fclean all
