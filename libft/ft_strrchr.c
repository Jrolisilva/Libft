/* char *strrchr(const char *s, int c);

A função localiza a ultima ocorrencia de c (convertido para char)
na string apontada por s.
\0 é considerado parte da string
Ela retorna a posição do charactere na string
ou NULL se o character nao for encontrado. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (unsigned char)c;
	len = ft_strlen((char *)s);
	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}
