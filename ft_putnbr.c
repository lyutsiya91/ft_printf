/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:33:48 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:33:49 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int counter, t_printf *arg)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('2', 1);
			ft_putstr_fd("147483648", 1);
		}
		else
			n = -n;
	}
	if (n >= 0)
		ft_uputnbr(n, counter, arg);
}
