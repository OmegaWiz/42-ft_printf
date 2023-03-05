/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <kkaiyawo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:27:25 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/24 13:28:56 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int	ft_isize(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		if (n == -2147483648)
			return (11);
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_isize(n);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i--] = 0;
	while (ft_abs(n) > 9)
	{
		str[i--] = (ft_abs(n) % 10) + '0';
		n /= 10;
	}
	str[i--] = ft_abs(n) + '0';
	if (n < 0)
		str[i] = '-';
	return (str);
}
