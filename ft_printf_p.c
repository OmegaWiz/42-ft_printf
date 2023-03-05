/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:54:51 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 08:58:02 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_lx(unsigned long arg, int isCap)
{
	unsigned long long	l;
	int					i;
	int					j;

	i = 1;
	l = 1;
	while (l << (i * 4) <= (unsigned long long) arg && i < 16)
		i++;
	j = i;
	while (--i >= 0)
		ft_putchar_stdout(ft_btox((arg >> (i * 4)) % 16, isCap));
	return (j);
}

int	ft_printf_p(void *arg)
{
	int				j;
	unsigned long	u;

	if (arg == 0)
	{
		j = write(1, "(nil)", 5);
		return (j);
	}
	j = 0;
	u = (unsigned long) arg;
	j += ft_printf_sharp(0);
	return (j + ft_printf_lx(u, 0));
}
