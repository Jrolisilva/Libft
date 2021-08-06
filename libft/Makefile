SRC		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \

OBJS	= $(SRC:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= /bin/rm -f

LIB		= ar -rcs
LIB2	= ranlib



INCS	= libft.h


all:	$(NAME)

$(NAME):	$(OBJS) $(INCS)
					$(LIB) $(NAME) $(OBJS)
					$(LIB2) $(NAME)	

.c.o:	
					$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
					$(RM) $(OBJS)

fclean:		clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:	all clean fclean re