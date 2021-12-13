/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:39 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:30:40 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(t_printf *arg)
{
	char	*str;
	int		len;

	str = va_arg(arg->arguments, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (arg->precision > len)
		arg->precision = len;
	if (arg->minus == 0 && arg->precision >= 0 && arg->width > arg->precision)
		ft_putwidth(arg, arg->precision);
	if (arg->minus == 0 && arg->precision < 0 && arg->width > len)
		ft_putwidth(arg, len);
	ft_putstr(arg, str);
	if (arg->minus == 1 && arg->precision >= 0 && arg->width > arg->precision)
		ft_putwidth(arg, arg->precision);
	if (arg->minus == 1 && arg->precision < 0 && arg->width > len)
		ft_putwidth(arg, len);
}
