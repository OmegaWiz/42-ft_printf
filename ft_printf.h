/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:49:39 by kkaiyawo          #+#    #+#             */
/*   Updated: 2023/02/28 09:02:00 by moonegg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
int		ft_putstr_stdout(char *str);
int		ft_putchar_stdout(char c);

int		ft_printf_sharp(int isCap);
char	ft_btox(unsigned int nbr, int isCap);

int		ft_printf_c(char arg);
int		ft_printf_s(char *arg);
int		ft_printf_p(void *arg);
int		ft_printf_d(long arg);
int		ft_printf_i(long arg);
int		ft_printf_u(unsigned long arg);
int		ft_printf_x(long long arg, int isCap);
int		ft_printf_switchcase(char t, va_list args);
int		ft_printf(const char *str, ...);

#endif
