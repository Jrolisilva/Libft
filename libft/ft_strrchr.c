/* char *strrchr(const char *s, int c);

A função localiza a ultima ocorrencia de c (convertido para char)
na string apontada por s.
\0 é considerado parte da string
Ela retorna a posição do charactere na string
ou NULL se o character nao for encontrado. */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int len;
    char    *scpy;

    scpy = (char *)s;
    len = ft_strlen(scpy);
    i = len - 1;
    if (c == '\0')
        return (&scpy[len]);
    while (i >= 0)
    {
        if (scpy[i] == c)
            return(&scpy[i]);
        i--;
    }   
    return (0);
}
