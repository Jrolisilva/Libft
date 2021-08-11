/* char *strchr(const char *s, int c);

A função localiza a primeira ocorrencia de c (convertido para char)
na string apontada por s.
\0 é considerado parte da string
Ela retorna a posição do charactere na string
ou NULL se o character nao for encontrado. */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(&s[i]));
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
