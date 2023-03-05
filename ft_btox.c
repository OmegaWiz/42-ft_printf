/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:11:17 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 09:01:55 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_btox(unsigned int nbr, int isCap)
{
	if (nbr < 10)
		return ('0' + nbr);
	else
		return ('a' + nbr - 10 - (32 * isCap));
}