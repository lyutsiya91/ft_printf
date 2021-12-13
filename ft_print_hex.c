/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:53 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:31:54 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(t_printf *arg, int capital)
{
	unsigned int	u;
	int				counter;

	u = va_arg(arg->arguments, unsigned int);
	counter = ft_ucountlength(arg, 16, u);
	if (arg->minus == 0)
	{
		if (arg->precision >= counter && arg->width > arg->precision)
			ft_putwidth(arg, arg->precision);
		if (arg->precision < counter && arg->width > counter)
			ft_putwidth(arg, counter);
	}
	if (arg->precision > counter)
		ft_putprecision(arg, counter);
	if (capital == 0)
		ft_hexputnbr(u, counter, "0123456789abcdef", arg);
	else
		ft_hexputnbr(u, counter, "0123456789ABCDEF", arg);
	if (arg->minus == 1)
	{
		if (arg->precision >= counter && arg->width > arg->precision)
			ft_putwidth(arg, arg->precision);
		if (arg->precision < counter && arg->width > counter)
			ft_putwidth(arg, counter);
	}
}
