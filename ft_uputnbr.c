/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:36 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:31:37 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uputnbr(unsigned int n, int counter, t_printf *arg)
{
	char	*str;

	if (n < 10)
	{
		if (n == 0 && arg->precision == 0)
			return ;
		ft_putchar_fd(n + '0', 1);
		return ;
	}
	str = (char *)malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return ;
	str[counter] = '\0';
	while (counter > 0)
	{
		str[--counter] = (n % 10) + '0';
		n /= 10;
	}
	ft_putstr_fd(str, 1);
	free(str);
}
