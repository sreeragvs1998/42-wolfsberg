


void ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	while (size > 1)
	{
		i = 0;

		while ( i <= size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>

int main(void)
{
	int tab[] = {8, 6, 9, 3, 7, 1};
	int size = 6;
	int i = 0;
	ft_sort_int_tab(tab, size);
	while (i <= size - 1)
	{
		printf ("%d ", tab[i]);
		i++;
	}
}


