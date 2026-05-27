


char *ft_strupcase(char *str)

{
	int i  = 0;

	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


#include <stdio.h>

int main(void)
{
	char str[] = "Hello World";
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
