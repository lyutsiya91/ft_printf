/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:32:32 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:32:33 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_signed(t_printf *arg)
{
	int	i;
	int	counter;

	i = va_arg(arg->arguments, int);
	counter = ft_countlength(arg, 10, i);
	if (arg->minus == 1)
	{
		if (i < 0)
			ft_putchar_fd('-', 1);
		if (arg->precision > counter)
			ft_putprecision(arg, counter);
		ft_putnbr(i, counter, arg);
	}
	if (arg->precision >= counter && arg->width > arg->precision)
		ft_putwidth(arg, arg->precision);
	if (arg->precision < counter && arg->width > counter)
		ft_putwidth(arg, counter);
	if (arg->minus == 0)
	{
		if (i < 0 && (arg->zero == 0 || arg->width <= counter))
			ft_putchar_fd('-', 1);
		if (arg->precision > counter)
			ft_putprecision(arg, counter);
		ft_putnbr(i, counter, arg);
	}
}
