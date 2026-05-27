


char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


#include <stdio.h>

int main(void)
{
	char src[] = "Hello World";
	char dest[sizeof(src)];
	ft_strcpy ( dest, src);
	printf("%s", dest);
	return(0);
}
