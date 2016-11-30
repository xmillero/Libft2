/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:10:47 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/25 12:38:24 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int l_n;

	l_n = n;
	if (l_n < 0)
	{
		ft_putchar('-');
		l_n = -l_n;
	}
	if (l_n >= 10)
	{
		ft_putnbr(l_n / 10);
		ft_putnbr(l_n % 10);
	}
	else
		ft_putchar(l_n + '0');
}
