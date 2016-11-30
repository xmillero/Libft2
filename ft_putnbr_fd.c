/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:23:49 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/25 14:28:34 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int l_n;

	l_n = n;
	if (l_n < 0)
	{
		ft_putchar_fd('-', fd);
		l_n = -l_n;
	}
	if (l_n >= 10)
	{
		ft_putnbr_fd(l_n / 10, fd);
		ft_putnbr_fd(l_n % 10, fd);
	}
	else
		ft_putchar_fd(l_n + '0', fd);
}
