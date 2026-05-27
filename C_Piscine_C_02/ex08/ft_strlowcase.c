




char *ft_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}




#include <stdio.h>

int main(void)
{
	char str[] = "Hello WORLd";

	ft_strlowcase (str);
	printf("%s", str);
	return (0);
}

