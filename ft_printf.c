/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:52:00 by kadjane           #+#    #+#             */
/*   Updated: 2021/12/24 16:51:49 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include "ft_printf.h"

// int	ft_printf(const char *format,...)
// {
// 	 int		count;
// 	va_list	ap;
// 	 char *str;

// 	 count = 0;
// 	va_start(ap, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 		{
// 			format++;
// 			if(*format == 'c')
// 			{
// 				format++;
// 				ft_putchar(va_arg(ap, int));
// 				count += 1;
// 			}
// 			if (*format == 's')
// 			{
// 				format++;
// 				str = va_arg(ap,char *);
// 				ft_putstr(str);
// 				count += ft_strlen(str);
// 			}
// 			if (*format == 'd')
// 			{
// 				format++;
// 				str = ft_itoa(va_arg(ap,int));
// 				ft_putstr(str);
// 				count += ft_strlen(str);
// 			}
// 			if (*format == 'u')
// 			{
// 				ft_nbrnnsigne(va_arg(ap,unsigned int))
// 				count += ft_strlen(ap);
// 			}
// 		}
// 		else
// 		{
// 			ft_putchar(*format);
// 			format++;
// 			count++;
// 		}		
// 	}
// 	return (count);	
// }
 
#include<stdio.h>
int main()
{
	 int c = -128;
	// int a = ft_printf("khawla adjane %d aa1\n",c);
	printf ("a = {%u}\n",c);
	// int b = printf("khawla adjane %d aa1\n",c);	
	// printf ("b = {%d}",b);
}
