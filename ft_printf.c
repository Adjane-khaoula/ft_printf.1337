/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:52:00 by kadjane           #+#    #+#             */
/*   Updated: 2022/01/02 22:42:46 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format(va_list ap, const char *format , int count)
{
	format++;
	if (*format == 'c')
		ft_write(va_arg(ap, int),&count);
	if (*format == 's')
		ft_putstr(va_arg(ap, char *), &count);
	if (*format == 'd' || *format == 'i')
		ft_putunbr_base(va_arg(ap, int), &count);
	if (*format == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), 'u',  &count);
	if (*format == 'x')
		ft_putnbr_base(va_arg(ap,unsigned int), 'x',  &count);
	if (*format == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), 'X',  &count);
	if (*format == 'p')
	{
		ft_putstr("0x", &count);
		ft_putnbr_base(va_arg(ap,unsigned long int), 'x', &count);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int				count;
	va_list			ap;

	count = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			count = ft_printf_format(ap, format, count);
			format++;
		}
		else
			ft_write(*format, &count);
		format++;
	}	
	return (count);	
}
