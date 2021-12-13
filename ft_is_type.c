/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:32:50 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:32:51 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_type(int c)
{
	if (c == '%' || c == 'c' || c == 's' || c == 'u'
		|| c == 'X' || c == 'x' || c == 'p' || c == 'd' || c == 'i')
		return (1);
	else
		return (0);
}