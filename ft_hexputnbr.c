/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:32:03 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:32:04 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexputnbr(unsigned long n, int counter, char *tab, t_printf *arg)
{
	char	*str;

	if (n == 0)
	{
		if (arg->precision == 0)
			return ;
		ft_putchar_fd('0', 1);
		return ;
	}
	str = (char *)malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return ;
	str[counter] = '\0';
	while (counter > 0)
	{
		str[--counter] = tab[n % 16];
		n /= 16;
	}
	ft_putstr_fd(str, 1);
	free(str);
}
