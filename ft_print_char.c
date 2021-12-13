/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:30 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:30:32 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(t_printf *arg)
{
	char	c;

	c = va_arg(arg->arguments, int);
	if (!arg->minus && arg->width)
		ft_putwidth(arg, 1);
	ft_putchar_fd(c, 1);
	if (arg->minus && arg->width)
		ft_putwidth(arg, 1);
	arg->length++;
}
