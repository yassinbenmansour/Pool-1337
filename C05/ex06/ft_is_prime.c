int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main()
// {
// int i = 0;
// while (i <= 5000)
// {
// printf("%d ",i);
// printf("%d\n",ft_is_prime(i));
// i++;
// }
// return(0);
// }
