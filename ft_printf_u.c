/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:08:25 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 19:12:25 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_usize(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		i;

	i = ft_usize(n);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i--] = 0;
	while (n > 9)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	str[i--] = n + '0';
	return (str);
}

int	ft_printf_u(unsigned long arg)
{
	char	*nbr;
	int		n;

	nbr = ft_utoa(arg);
	n = ft_putstr_stdout(nbr);
	free(nbr);
	return (n);
}
