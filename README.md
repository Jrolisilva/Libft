# 42 project #1

In this repo you will find all the codes developed during the libft project, both mandatory's Parts 1 and 2, as well as other functions that I may find useful later on. These functions must be compiled (through a Makefile) into a libft.a library for my own use further on the 42cursus' syllabus. 


## Part 1

In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.

• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi 

## Part 2

In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.

• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd 

# The Project

## Functions from <ctype.h>

    ft_isalpha	- checks for an alphabetic character
    ft_isdigit	- checks for a digit (0 through 9).
    ft_isalnum	- checks for an alphanumeric character
    ft_isascii	- checks whether c fits into the ASCII character set
    ft_isprint	- checks for any printable character
    ft_toupper	- convert char to uppercase
    ft_tolower	- convert char to lowercase

## Functions from <string.h>

    ft_memset	- fill memory with a constant byte
    ft_strlen	- calculate the length of a string
    ft_bzero	- zero a byte string
    ft_memcpy	- copy memory area
    ft_memmove	- copy memory area
    ft_strlcpy	- copy string to an specific size
    ft_strlcat	- concatenate string to an specific size
    ft_strchr	- locate character in string
    ft_strrchr	- locate character in string
    ft_strncmp	- compare two strings
    ft_memchr	- scan memory for a character
    ft_memcmp	- compare memory areas
    ft_strnstr	- locate a substring in a string
    ft_strdup	- creates a dupplicate for the string passed as parameter
    
## Functions from <stdlib.h>


    ft_atoi	- convert a string to an integer
    ft_calloc	- allocates memory and sets its bytes' values to 0
    
## Non-standard functions


    ft_substr	- returns a substring from a string
    ft_strjoin	- concatenates two strings
    ft_strtrim	- trims the beginning and end of string with specific set of chars
    ft_split	- splits a string using a char as parameter
    ft_itoa	- converts a number into a string
    ft_strmapi	- applies a function to each character of a string
    ft_striteri	- applies a function to each character of a string
    ft_putchar_fd	- output a char to a file descriptor
    ft_putstr_fd	- output a string to a file descriptor
    ft_putendl_fd	- output a string to a file descriptor, followed by a new line
    ft_putnbr_fd	- output a number to a file descriptor

# Usage 
## Requeriments

libft requires a gcc compiler and some standard libraries

# Instructions

### Clone this repository in your local computer:
$> git clone https://github.com/Jrolisilva/Libft.git

### In your local repository, run make
$> make 

### To use the library in your code you will need to include the header
#include "libft.h" 
