/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:27:27 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:27:28 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_define_format(t_printf *arg, const char *str)
{
	int	capital;

	capital = 0;
	if (ft_is_flag(*str))
		str = ft_define_flags(arg, str);
	if (*str == '%')
		ft_print_percent(arg);
	if (*str == 'c')
		ft_print_char(arg);
	if (*str == 's')
		ft_print_string(arg);
	if (*str == 'u')
		ft_print_unsigned(arg);
	if (*str == 'X')
		capital = 1;
	if (*str == 'x' || *str == 'X')
		ft_print_hex(arg, capital);
	if (*str == 'p')
		ft_print_pointer(arg);
	if (*str == 'd' || *str == 'i')
		ft_print_signed(arg);
	if (!ft_is_flag(*str) && !ft_is_type(*str))
		return (NULL);
	ft_update_arg(arg);
	return (++str);
}
