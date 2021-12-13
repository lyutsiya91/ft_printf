/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:29:15 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:29:16 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_width_flag(t_printf *arg, const char *str)
{
	if (arg->star != 1)
	{
		while (ft_isdigit(*str))
		{
			arg->width = (arg->width * 10) + (*str - '0');
			str++;
		}
	}
	return (str);
}
