







char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	int n = 3;
	char src[] = "HelloWorld";
	char dest[sizeof(src)];
	ft_strncpy (dest, src, n);
	printf ("%s", dest);
	return (0);
}

