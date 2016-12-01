/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:20:19 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/30 16:40:26 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(int n)
{
	int		len;
	long	l_nb;

	l_nb = n;
	len = 0;
	if (n < 0)
	{
		l_nb = -n;
		len++;
	}
	while (l_nb != l_nb % 10)
	{
		len++;
		l_nb = (l_nb - l_nb % 10) / 10;
	}
	len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	l_nb;

	i = 0;
	l_nb = n;
	len = ft_len_nb(n);
	str = ft_memalloc(sizeof(*str) * (len + 1));
	if (!str)
		return (str);
	if (n < 0)
	{
		str[0] = '-';
		l_nb *= -1;
	}
	while (i < (n < 0 ? len - 1 : len))
	{
		str[len - i - 1] = (l_nb % 10) + 48;
		l_nb = (l_nb - l_nb % 10) / 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}
