/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:05:34 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 16:17:48 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(long arg)
{
	char	*nbr;
	int		n;

	nbr = ft_itoa(arg);
	n = ft_strlen(nbr);
	write(1, nbr, n);
	free(nbr);
	return (n);
}
