#include <unistd.h>

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		write(1, &str[p], 1);
		p++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}
