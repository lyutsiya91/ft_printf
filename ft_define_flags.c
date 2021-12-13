/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:28:37 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:28:38 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_define_flags(t_printf *arg, const char *str)
{
	while (ft_is_flag(*str))
	{
		if (*str == '-')
		{
			arg->minus = 1;
			arg->zero = 0;
			str++;
		}
		if (*str == '0' && arg->minus == 0)
		{
			arg->zero = 1;
			str++;
		}
		if (*str == '0' && arg->minus != 0)
			str++;
		if (*str == '*')
			str = ft_star_flag(arg, str);
		if (ft_isdigit(*str))
			str = ft_width_flag(arg, str);
		if (*str == '.')
			str = ft_dot_flag(arg, str);
	}
	return (str);
}
