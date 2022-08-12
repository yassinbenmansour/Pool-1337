#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_total(char **strs, char *sep, int size)
{
	int	i;
	int	tlen;

	i = 0;
	tlen = 0;
	while (i < size)
	{
		tlen += ft_strlen(strs[i]);
		i++;
	}
	tlen += ft_strlen(sep) * (size - 1);
	return (tlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	k = size_total(strs, sep, size);
	s = (char *)malloc(sizeof(char) * (k + 1));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}
/*int main()
{
	char *p[3];
	p[0] = "test";
	p[1] = "or";
	p[2] = "null";
	printf("%s", ft_strjoin(3, p,"-_-"));
}*/
