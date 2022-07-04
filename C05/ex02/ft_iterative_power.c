/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenmans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:47:18 by zrdouane          #+#    #+#             */
/*   Updated: 2021/10/12 18:47:20 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power--)
		result *= nb;
	return (result);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%i", ft_iterative_power(555, 2));
// }
