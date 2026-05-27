


int ft_str_is_numeric(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] <= '9' && str[i] >= '0'))
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
	char str[] = "15s479";
	int det = ft_str_is_numeric (str);
	printf ("%d", det);
	return(0);
}

	

