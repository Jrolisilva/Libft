#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;

	if ((dest == src) || (n == 0))
		return (dest);
	destiny = (char *)dest;
	source = (const char *)src;
	if (source < destiny)
	{
		while (n--)
		{
			while (n--)
				*(destiny + n) = *(source + n);
			return (dest);
		}
	}
	while (n--)
		*destiny++ = *source++;
	return (dest);
}
