/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_switchcase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:57:22 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 08:12:53 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_switchcase(char t, va_list args)
{
	if (t == 'c')
		return (ft_printf_c(va_arg(args, int)));
	if (t == 's')
		return (ft_printf_s(va_arg(args, char *)));
	if (t == 'p')
		return (ft_printf_p(va_arg(args, void *)));
	if (t == 'd')
		return (ft_printf_d(va_arg(args, long)));
	if (t == 'i')
		return (ft_printf_i(va_arg(args, long)));
	if (t == 'u')
		return (ft_printf_u(va_arg(args, unsigned long)));
	if (t == 'x')
		return (ft_printf_x(va_arg(args, long long), 0));
	if (t == 'X')
		return (ft_printf_x(va_arg(args, unsigned long), 1));
	if (t == '%')
	{
		ft_putchar_stdout('%');
		return (1);
	}
	return (0);
}
