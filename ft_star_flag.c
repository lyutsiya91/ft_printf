/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:28:55 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:28:56 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_star_flag(t_printf *arg, const char *str)
{
	arg->star = 1;
	arg->width = va_arg(arg->arguments, int);
	if (arg->width < 0)
	{
		arg->minus = 1;
		arg->zero = 0;
		arg->width *= -1;
	}
	str++;
	return (str);
}
