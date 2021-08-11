#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;

	if ((dest == src) || (n == 0))
		return (dest);
	destiny = (char *)dest;
	source = (const char *)src;
	while (n--)
		*destiny++ = *source++;
	return (dest);
}
