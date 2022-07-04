/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:38:36 by ogorfti           #+#    #+#             */
/*   Updated: 2022/03/28 21:16:51 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
