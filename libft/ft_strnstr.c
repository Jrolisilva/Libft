/* char *strnstr(const char *haystack, const char *needle, size_t len);

A função procura a primeira ocorrencia da string needle dentro da string haystack.
Essa procura é limitada pelo argumento len.
strnstr pode ter problemas de portabilidade
Se needle é uma string vazia a função retorna o haystack.
Se needle não esta em haystack, retorna NULL.
Se encontrado needle em haystack a função retorna o ponteiro da primeira occorrencia. */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    char    *hay;
    char    *need;

    hay = (char *)haystack;
    need = (char *)needle;
    if (need[0] == '\0')
        return (hay);
    i = 0;
    while (hay[i] != '\0')
    {
        j = 0;
        if (hay[i] == need[i])
        {
            while (hay[i + j] == need [j] &&
                            (j + i) < len && need[j] != '\0')
                            j++;
                    if (need[j] == '\0')
                        return (&hay[i]);
        }
        i++;
    }
    return (0);
}
