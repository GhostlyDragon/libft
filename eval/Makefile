# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 23:34:56 by aboulakr          #+#    #+#              #
#    Updated: 2023/12/28 23:34:57 by aboulakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES = ft_memset.c ft_toupper.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_memcmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OFILES = $(CFILES:.c=.o)
NAME = libft.a
BONUS_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBONUS_FILES = $(BONUS_FILES:.c=.o)



all: $(NAME)

%.o : %.c libft.h
	$(CC)  $(CFLAGS) -c $< -o $@

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

bonus :  $(OBONUS_FILES)
	ar rc $(NAME) $(OBONUS_FILES)

clean:
	rm  -f $(OFILES) $(OBONUS_FILES)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
