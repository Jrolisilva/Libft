SRC		= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_tolower.c ft_toupper.c \

OBJ		= $(SRC:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= /bin/rm -f

LIB		= ar -rcs
LIB2 	= ranlib



INCS	= libft.h


all:	$(NAME)

$(NAME):	$(OBJ) 	$(INCS)
					$(LIB) $(NAME) $(OBJ)
					$(LIB2) $(NAME)	

.c.o: 	
					$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean: 				
					$(RM) $(OBJ)

fclean:		clean
					$(RM) $(NAME)

re: 				fclean all

.PHONY: all clean re fclean