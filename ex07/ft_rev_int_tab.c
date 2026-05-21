


void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i = 0;
	while (i <= size - 1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}

}

#include <stdio.h>

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab (tab, size);
	int i = 0;
	while (i <= size - 1)
	{
		printf ("%d ", tab[i]);
		i++;
	}
	return (0);
}
