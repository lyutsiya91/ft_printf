/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ucountlength.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:22 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:31:23 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ucountlength(t_printf *arg, int base, unsigned long number)
{
	int	counter;

	counter = 0;
	if (number == 0 && arg->precision != 0)
	{
		arg->length++;
		counter++;
	}
	while (number >= 1)
	{
		number /= base;
		arg->length++;
		counter++;
	}
	return (counter);
}
