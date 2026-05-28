




char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
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
	char dest[] = "Hello";
	char src[] = "World";

	ft_strcat (dest, src);
	printf("%s", dest);
	return (0);
}
