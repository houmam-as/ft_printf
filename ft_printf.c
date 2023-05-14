/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:55:43 by hait-sal          #+#    #+#             */
/*   Updated: 2022/12/20 09:58:16 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent(const char *s, int i, va_list valist)
{
	int	sum;

	sum = 0;
	if (s[i] == '%')
		sum += ft_putchar('%');
	else if (s[i] == 'd' || s[i] == 'i')
		sum += ft_putnbr(va_arg(valist, int));
	else if (s[i] == 'x')
		sum += ft_puthex(va_arg(valist, unsigned int), 0);
	else if (s[i] == 'X')
		sum += ft_puthex(va_arg(valist, unsigned int), 1);
	else if (s[i] == 'c')
		sum += ft_putchar(va_arg(valist, int));
	else if (s[i] == 's')
		sum += ft_putstr(va_arg(valist, char *));
	else if (s[i] == 'u')
		sum += ft_unsigned(va_arg(valist, unsigned int));
	else if (s[i] == 'p')
	{
		sum += write(1, "0x", 2);
		sum += ft_puthex(va_arg(valist, unsigned long long), 0);
	}
	return (sum);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		sum;
	va_list	args;

	va_start(args, s);
	i = 0;
	sum = 0;
	while (s[i])
	{
		if (s[i] == '%')
			sum += ft_percent(s, ++i, args);
		else
			sum += write (1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (sum);
}
