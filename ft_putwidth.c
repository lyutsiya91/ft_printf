/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:20 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:30:21 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putwidth(t_printf *arg, int n)
{
	int	k;

	k = arg->width - n;
	if (arg->negative)
	{
		k -= 1;
		if (arg->zero)
			ft_putchar_fd('-', 1);
	}
	while (k)
	{
		if (arg->zero)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		arg->length++;
		k--;
	}
}
