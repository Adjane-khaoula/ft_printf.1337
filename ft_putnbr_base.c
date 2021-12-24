/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:53:00 by kadjane           #+#    #+#             */
/*   Updated: 2021/12/24 16:28:11 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned	int	strlenb(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	erreur1(char *str)
{
	int	l;
	int	j;

	l = 0;
	j = 0;
	while (str[l])
	{
		j = l + 1;
		while (str[j])
		{
			if (str[l] == str[j])
			{
				return (0);
				break ;
			}
			j++;
		}
		if (str[l] == '+' || str[l] == '-' )
			return (0);
		l++;
	}
	return (1);
}

int	erreur2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (strlenb(str) < 2)
		return (0);
	return (1);
}

int	routnbr(int nbr)
{
	unsigned int	n;

	n = 0;
	if (nbr < 0)
	{
		n = nbr * (-1);
		write (1, "-", 1);
	}
	else
		n = nbr;
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	if (erreur1(base) == 1 && erreur2(base) == 1)
	{
		n = routnbr(nbr);
		if (n < strlenb(base))
		{
			while (base[i])
			{
				if (n == i)
					write (1, &base[i], 1);
				i++;
			}
		}
		else
		{
			ft_putnbr_base(n / strlenb(base), base);
			ft_putnbr_base(n % strlenb(base), base);
		}
	}
}
