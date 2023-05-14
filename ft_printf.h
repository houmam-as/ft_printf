/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:55:47 by hait-sal          #+#    #+#             */
/*   Updated: 2022/12/20 10:05:40 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_per_cnt(const char *s);
int		ft_putchar(char c);
void	ft_putendl(char *s);
int		ft_putnbr(int m);
int		ft_putstr(char *s);
int		ft_printf(const char *s, ...);
int		ft_unsigned(unsigned int m);
int		ft_puthex(unsigned long long m, int i);

#endif
