/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:55:14 by kadjane           #+#    #+#             */
/*   Updated: 2022/01/02 22:43:54 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void    ft_putstr(char *str, int *count);
void	ft_putchar(char	c);
void	ft_putnbr_base(unsigned long int n, char format, int *c);
void    ft_write(char c,int *count);
void    ft_putunbr_base(long n, int *count);

#endif