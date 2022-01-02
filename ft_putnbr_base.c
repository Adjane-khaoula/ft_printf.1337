/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:53:00 by kadjane           #+#    #+#             */
/*   Updated: 2022/01/02 22:55:57 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long int n, char format, int *c)
{
	char	*base;
	int		b;
	
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (format == 'x' || format == 'X')
	b = 16;
	if (format == 'u')
		b = 10;
	if (n < b)
		ft_write(base[n], c);
	else
	{
		ft_putnbr_base(n / b, format, c);
		ft_putnbr_base(n % b, format, c);
	}
}

// int main()
// {
// 	ft_putnbr_base1(-2,);
// 	// printf("%d\n",j);
// }