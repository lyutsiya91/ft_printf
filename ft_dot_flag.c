/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:29:34 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:29:35 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_dot_flag(t_printf *arg, const char *str)
{
	if (*++str == '*')
	{
		arg->precision = va_arg(arg->arguments, int);
		str++;
	}
	else if (ft_isdigit(*str))
	{
		arg->precision = 0;
		while (ft_isdigit(*str))
		{
			arg->precision = (arg->precision * 10) + (*str - '0');
			str++;
		}
	}
	else
		arg->precision = 0;
	if (arg->precision >= 0)
		arg->zero = 0;
	return (str);
}
