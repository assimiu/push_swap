/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:49:46 by amane             #+#    #+#             */
/*   Updated: 2023/02/17 15:17:00 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../swap_h/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != 0)
	{
		i ++;
	}
	return (i);
}
