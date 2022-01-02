/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 20:01:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/01/02 22:56:33 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_base(long n, int *count)
{
    char	*base;

	base = "0123456789";
    if (n < 0)
    {
        n *= -1;
        ft_write('-', count);
    }
    if (n < 10)
		ft_write(base[n], count);
	else
	{
		ft_putunbr_base(n / 10, count);
		ft_putunbr_base(n % 10, count);
	}
}
