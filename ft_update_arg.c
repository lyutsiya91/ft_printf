/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:32:57 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:32:59 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*ft_update_arg(t_printf *arg)
{
	arg->minus = 0;
	arg->zero = 0;
	arg->star = 0;
	arg->width = 0;
	arg->precision = -1;
	arg->negative = 0;
	return (arg);
}
