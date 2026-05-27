


int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);

}

#include <stdio.h>


int main(void)
{
	char s1[] = "abe";
	char s2[] = "abd";
        int i = ft_strcmp(s1, s2);
	printf ("%d", i );
	return (0);
}	

