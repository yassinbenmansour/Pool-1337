/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenmans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:39:07 by ybenmans          #+#    #+#             */
/*   Updated: 2022/06/08 19:39:15 by ybenmans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}


void	ft_ft(int *nbr)
{
	ft_putnbr(*nbr);
}




int main(){
    int *ptr ;
    int nbr ;
    nbr = 42 ;

    ptr = &nbr;


    ft_ft(ptr);


}

