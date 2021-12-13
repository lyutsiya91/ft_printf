/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:33:57 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:33:59 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(t_printf *arg, const char *str)
{
	int		n;

	n = arg->precision;
	while (*str)
	{
		if (n-- == 0)
			break ;
		ft_putchar_fd(*str++, 1);
		arg->length++;
	}
}
