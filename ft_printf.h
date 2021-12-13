/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalio <sgalio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:25:52 by sgalio            #+#    #+#             */
/*   Updated: 2021/12/13 17:25:53 by sgalio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_printf
{
	va_list	arguments;
	int		length;
	int		minus;
	int		zero;
	int		star;
	int		width;
	int		precision;
	int		negative;
}			t_printf;

int			ft_printf(const char *format, ...);
int			ft_parce(const char *format, t_printf *arg);
t_printf	*ft_initial_arg(t_printf *arg);
t_printf	*ft_update_arg(t_printf *arg);
const char	*ft_define_format(t_printf *arg, const char *str);
const char	*ft_define_flags(t_printf *arg, const char *str);
const char	*ft_dot_flag(t_printf *arg, const char *str);
const char	*ft_width_flag(t_printf *arg, const char *str);
const char	*ft_star_flag(t_printf *arg, const char *str);

int			ft_is_flag(int c);
int			ft_is_type(int c);
int			ft_isdigit(int c);
int			ft_strlen(const char *s);
int			ft_countlength(t_printf *arg, int base, long number);
int			ft_ucountlength(t_printf *arg, int base, unsigned long number);

void		ft_print_percent(t_printf *arg);
void		ft_print_char(t_printf *arg);
void		ft_print_string(t_printf *arg);
void		ft_print_unsigned(t_printf *arg);
void		ft_print_hex(t_printf *arg, int capital);
void		ft_print_pointer(t_printf *arg);
void		ft_print_signed(t_printf *arg);

void		ft_hexputnbr(unsigned long n, int counter, char *tab,
				t_printf *arg);
void		ft_putwidth(t_printf *arg, int n);
void		ft_putprecision(t_printf *arg, int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(t_printf *arg, const char *str);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr(int n, int counter, t_printf *arg);
void		ft_uputnbr(unsigned int n, int counter, t_printf *arg);

#endif
