/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:27:07 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 16:16:03 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(long arg)
{
	char	*nbr;
	int		n;

	nbr = ft_itoa(arg);
	n = ft_strlen(nbr);
	write(1, nbr, n);
	free(nbr);
	return (n);
}
