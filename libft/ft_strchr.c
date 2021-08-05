/* char *strchr(const char *s, int c);

A função localiza a primeira ocorrencia de c (convertido para char)
na string apontada por s.
\0 é considerado parte da string
Ela retorna a posição do charactere na string
ou NULL se o character nao for encontrado. */

#include "libft.h"

char *ft_strchr(const *s, int c)
{
    int     i;
    int     len;
    char    *scpy;

    scpy = (char *)s;
    i = 0;
    len = ft_strlen(scpy);
    if (c == '\0')
        return (&scpy[len]);
    while (scpy[i] != '\0')
    {
        if (scpy[i] != '\0')
            return(&scpy[i]);
            i++;
    }
    return (0);
}