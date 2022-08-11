void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ram;

	ram = *a;
	*a = ram / *b;
	*b = ram % *b;
}
