/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:26:04 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:26:06 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_printf	*arg;

	arg = (t_printf *)malloc(sizeof(t_printf));
	if (arg == NULL)
		return (-1);
	ft_initial_arg(arg);
	va_start(arg->arguments, format);
	if (ft_parce(format, arg) == -1)
		return (-1);
	va_end(arg->arguments);
	free(arg);
	return (arg->length);
}
