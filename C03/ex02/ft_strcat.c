char	*ft_strcat(char *dest, char *src)
{
	int	cpt;
	int	i;

	cpt = 0;
	while (dest[cpt] != '\0')
		cpt++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[cpt] = src[i];
		cpt++;
		i++;
	}
	dest[cpt] = '\0';
	return (dest);
}
