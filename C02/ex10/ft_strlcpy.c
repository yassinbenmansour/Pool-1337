unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cpt;

	cpt = 0;
	i = 0;

	while (src[cpt] != '\0')
		cpt++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	}
	return (cpt);
}
