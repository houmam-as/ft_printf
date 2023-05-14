/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:50:39 by hait-sal          #+#    #+#             */
/*   Updated: 2022/12/19 18:59:01 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(int n, int i)
{
	char	*s;

	s = "0123456789abcdef";
	if (i == 1)
		s = "0123456789ABCDEF";
	return (write(1, &s[n], 1));
}

int	ft_puthex(unsigned long long m, int i)
{
	int	sum;

	sum = 0;
	if (m > 15)
	{
		sum += ft_puthex(m / 16, i);
		sum += ft_puthex(m % 16, i);
	}
	else
		sum += ft_hex(m, i);
	return (sum);
}
