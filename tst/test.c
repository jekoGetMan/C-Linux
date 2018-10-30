#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

int		main(void)
{
	int i;
	int *b;

int max;
int min;

	i = 0;
max = 3;
min = 1;
	b = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", b[i]);
		i++;
	}
	return (0);
}
