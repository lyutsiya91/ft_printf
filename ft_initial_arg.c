/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:26:36 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:26:37 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_initial_arg(t_printf *arg)
{
	arg->length = 0;
	arg->minus = 0;
	arg->zero = 0;
	arg->star = 0;
	arg->width = 0;
	arg->precision = -1;
	arg->negative = 0;
	return (arg);
}
