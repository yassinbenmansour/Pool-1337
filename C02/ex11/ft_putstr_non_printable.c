#include <unistd.h>

void	ft_hex(int nbr)
{
	char	*hex;

	hex = "012345789abcdef";
	write(1, &hex[nbr / 16], 1);
	write(1, &hex[nbr % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 && str[i] >= 0)
		{
			write(1, "\\", 1);
			ft_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
