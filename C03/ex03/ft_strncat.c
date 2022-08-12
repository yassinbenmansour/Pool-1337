char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cpt;
	unsigned int	i;

	cpt = 0;
	while (dest[cpt] != '\0')
		cpt++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[cpt + i] = src[i];
		i++;
	}
	dest[cpt + i] = '\0';
	return (dest);
}
