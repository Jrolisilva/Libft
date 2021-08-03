NAME	= libft.a

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
LIB		= ar -rcs

RM 		= /bin/rm -f

INCS 	= libft.h
SRC		= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_tolower.c ft_toupper.c

OBJ		= $(SRC:.c=.o)

all: 	$(NAME)

$(NAME): 	$(OBJ) 	$(INCS)
					$(NAME)

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
					gcc -nostartfiles -shared -o libft.so $(OBJ)

.c.o: 	
					$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean: 				
					$(RM) $(OBJ)

fclean:		clean
					$(RM) $(NAME)

re: 				fclean all