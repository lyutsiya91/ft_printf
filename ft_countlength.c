/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:33:37 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:33:38 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countlength(t_printf *arg, int base, long number)
{
	int	counter;
	int	sign;

	sign = 1;
	counter = 0;
	if (number == 0 && arg->precision != 0)
	{
		arg->length++;
		counter++;
	}
	if (number < 0)
	{
		arg->negative = 1;
		arg->length++;
		sign = -1;
	}
	while (number * sign >= 1)
	{
		number /= base;
		arg->length++;
		counter++;
	}
	return (counter);
}
