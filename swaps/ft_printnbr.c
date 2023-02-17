/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:08:13 by amane             #+#    #+#             */
/*   Updated: 2023/02/17 15:49:17 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_h/push_swap.h"


int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (nb == -2147483648)
			return (ft_printstr("-2147483648"));
		i += ft_printchar('-');
	}
	if (nb >= 0 && nb <= 9)
		return (ft_printchar('0' + nb) + i);
	i += ft_printnbr(nb / 10);
	i += ft_printnbr(nb % 10);
	return (i);
}
