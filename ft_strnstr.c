/* char *strnstr(const char *haystack, const char *needle, size_t len);

A função procura a primeira ocorrencia da string needle dentro da string haystack.
Essa procura é limitada pelo argumento len.
strnstr pode ter problemas de portabilidade
Se needle é uma string vazia a função retorna o haystack.
Se needle não esta em haystack, retorna NULL.
Se encontrado needle em haystack a função retorna o ponteiro da primeira occorrencia. */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while ((haystack[i + c] == needle[c]) && (i + c) < len)
		{
			if (needle[c + 1] == '\0')
				return ((char *)(&haystack[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
