



int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0; 
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}



#include <stdio.h>

int main(void)
{
	int n = 2;
	char s1[] = "accc";
	char s2[] = "abcd";
	int i = ft_strncmp(s1, s2, n);
	printf ( "%d", i);
	return (0);
}
