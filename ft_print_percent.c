/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:12 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:30:14 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_percent(t_printf *arg)
{
	if (!arg->minus && arg->width)
		ft_putwidth(arg, 1);
	ft_putchar_fd('%', 1);
	if (arg->minus && arg->width)
		ft_putwidth(arg, 1);
	arg->length++;
}
