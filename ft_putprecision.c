/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putprecision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:11 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:31:13 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putprecision(t_printf *arg, int n)
{
	int	k;

	k = arg->precision - n;
	while (k)
	{
		ft_putchar_fd('0', 1);
		arg->length++;
		k--;
	}
}
