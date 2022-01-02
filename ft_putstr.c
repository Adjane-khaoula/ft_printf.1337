/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:44:41 by kadjane           #+#    #+#             */
/*   Updated: 2022/01/02 22:42:14 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	char *nul;

	nul = "(null)";
	if (!str)
	{
		while (*nul)
			ft_write(*nul++, count);
	}
	else
	{
		while (*str)
			ft_write(*str++, count);
	}
}
