



char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


#include <stdio.h>

int main(void)
{
	char dest[] = "hello";
	char src[] = "world";
	int nb = 2;

	ft_strncat(dest, src, nb);
	printf ("%s", dest);
	return (0);
}
