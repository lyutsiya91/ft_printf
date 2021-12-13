/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:03 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:31:04 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(t_printf *arg)
{
	unsigned int	u;
	int				counter;

	u = va_arg(arg->arguments, unsigned int);
	counter = ft_ucountlength(arg, 10, u);
	if (arg->minus == 1)
	{
		if (arg->precision > counter)
			ft_putprecision(arg, counter);
		ft_uputnbr(u, counter, arg);
	}
	if (arg->precision >= counter && arg->width > arg->precision)
		ft_putwidth(arg, arg->precision);
	if (arg->precision < counter && arg->width > counter)
		ft_putwidth(arg, counter);
	if (arg->minus == 0)
	{
		if (arg->precision > counter)
			ft_putprecision(arg, counter);
		ft_uputnbr(u, counter, arg);
	}
}
