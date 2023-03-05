/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <kkaiyawo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:49:42 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/24 13:44:47 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		cnt;
	int		i;

	if (!str)
		return (0);
	va_start(args, str);
	i = -1;
	cnt = 0;
	while (str[++i])
	{
		if (str[i] != '%')
			cnt += ft_putchar_stdout(str[i]);
		else
			cnt += ft_printf_switchcase(str[++i], args);
	}
	va_end(args);
	return (cnt);
}
