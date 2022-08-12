#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((sizeof(int) * len));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
int main()
{
	int *arr;
	int n = ft_ultimate_range(&arr, -2, 11);
	int i=0;
	while(i < n)
		printf("%d ", arr[i++]);
}
