#include <stdlib.h>

int			*ft_range(int start, int end)
{
	int			*range;
	int			i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

#include <stdio.h>
int		 main()
{
	int *numbers;
	int i = 0;
	int start = 2147483640;
	int end = 2147483647;
	int numrange;
	if (end > start)
		numrange = end - start;
	else
		numrange = start - end;
	numbers = ft_range(start, end);
	while (i <= numrange)
		printf("%d |\n", numbers[i++]);
	return (0);
}
