NAME	= libft.a

CC 		= gcc
FLAGS 	= -Wall -Wextra -Werror

INCS 	= libft.h
SRC		= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_tolower.c ft_toupper.c



all: 	$(NAME)

clean:

fclean:

re: