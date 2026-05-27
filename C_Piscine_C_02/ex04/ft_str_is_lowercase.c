



int ft_str_is_lowercase(char *str)
{
	int i = 0 ; 
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}


#include <stdio.h>

int main(void)
{
	char str[] = "HelloWorld";
	int i = ft_str_is_lowercase (str);
	printf ("%d", i);
	return (0);
}
