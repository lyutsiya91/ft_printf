/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:26:52 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:26:53 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parce(const char *format, t_printf *arg)
{
	while (*format)
	{
		if (*format == '%')
		{
			format = ft_define_format(arg, ++format);
			if (format == NULL)
			{
				free(arg);
				return (-1);
			}
		}
		else
		{
			ft_putchar_fd(*format++, 1);
			arg->length++;
		}
	}
	return (1);
}
