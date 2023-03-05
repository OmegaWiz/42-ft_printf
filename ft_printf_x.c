/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:27:47 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 08:49:31 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(long long arg, int isCap)
{
	unsigned long	l;
	int				i;
	int				j;

	arg &= 0xffffffff;
	i = 1;
	l = 1;
	while (l << (i * 4) <= (unsigned long long) arg && i < 8)
		i++;
	j = i;
	while (--i >= 0)
		ft_putchar_stdout(ft_btox((arg >> (i * 4)) % 16, isCap));
	return (j);
}
