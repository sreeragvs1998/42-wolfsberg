


char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j;

	if (to_find == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;

		while ((str[i] == to_find[j]) && to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (to_find[j])
		{
			return (&str[i - j]);
		}
		i++;
	}
}



#include <stdio.h> 

int main(void)
{
	char str[
		
