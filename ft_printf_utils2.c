/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:35:49 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 16:25:14 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_stdout(char c)
{
	int	n;

	n = write(1, &c, 1);
	if (n < 0)
		return (0);
	return (n);
}

int	ft_putstr_stdout(char *str)
{
	int	n;

	if (!str)
		n = write(1, "(null)", 6);
	else
		n = write(1, str, ft_strlen(str));
	if (n < 0)
		return (0);
	return (n);
}
