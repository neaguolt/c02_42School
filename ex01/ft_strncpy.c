# include "helper.h"
# include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	it;

	if (src)
	{
		it = 0;
		while (src[it] && it < n)
		{
			dest[it] = src [it];
			it++;
		}
		dest[it] = '\0';
		while (it++ < n)
		{
			dest[it] = '\0';
		}
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[10];

	src = "Hello!";
	write(1, ft_strncpy(dest, src, 3), 5);
}
