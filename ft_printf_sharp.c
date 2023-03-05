/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sharp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <kkaiyawo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:02:03 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/03/01 12:02:08 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_sharp(int isCap)
{
	int	j;

	j = ft_putchar_stdout('0');
	j += ft_putchar_stdout('x' - (32 * isCap));
	return (j);
}
