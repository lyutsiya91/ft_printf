/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:32:12 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:32:13 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(t_printf *arg)
{
	unsigned long	p;
	int				counter;

	p = va_arg(arg->arguments, unsigned long);
	counter = ft_ucountlength(arg, 16, p);
	if (arg->minus == 0)
	{
		if (arg->precision >= counter && arg->width > (arg->precision + 2))
			ft_putwidth(arg, (arg->precision + 2));
		if (arg->precision < counter && arg->width > (counter + 2))
			ft_putwidth(arg, (counter + 2));
	}
	ft_putstr_fd("0x", 1);
	arg->length += 2;
	if (arg->precision > counter)
		ft_putprecision(arg, counter);
	ft_hexputnbr(p, counter, "0123456789abcdef", arg);
	if (arg->minus == 1)
	{
		if (arg->precision >= counter && arg->width > (arg->precision + 2))
			ft_putwidth(arg, (arg->precision + 2));
		if (arg->precision < counter && arg->width > (counter + 2))
			ft_putwidth(arg, (counter + 2));
	}
}
