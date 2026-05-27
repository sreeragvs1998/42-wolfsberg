





char *ft_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			if (str[i+1] >= 'a' && str[i+1] <= 'z')
			{
				str[i +1] = str[i + 1] - 32;
			}
		}
		else if ((str[i - 1] >= '0' && str[i - 1] <= '9') || (str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
			str[i] += 32;
			}
		}
		i++;	
	}
	return (str);
}



#include <stdio.h>

int main(void)
{
	char str[] = "hi, How aRe you? 42words forty-two; fifty+and+one";
	printf ("Before : %s\n", str);
	ft_strcapitalize(str);
	printf ("After  : %s", str);
	return (0);
}
