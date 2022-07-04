/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenmans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:47:58 by zrdouane          #+#    #+#             */
/*   Updated: 2021/10/12 18:48:00 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// #include <limits.h>
// int  main(void)
// {
//  int number;

//  number = 0;
//  while (number < 5000)
//  {
//      printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
//      number++;
//  }
//  printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
//  printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
//  printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
//  printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
// }
