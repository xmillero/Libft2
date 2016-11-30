/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:20:19 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/30 12:48:06 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	long	n1;
	char	*str;
	int		neg;

	i = 0;
	neg = 0;
	n1 = n;
	if (n < 0)
	{
		neg = 1;
		n1 = -n;
	}
	if (n1 == 0)
		i = 1;
	while (n1 != 0)
	{
		i++;
		n1 = n1 / 10;
	}
	if (neg)
		i++;	
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	n1 = (neg) ? -n : n;
	while (i--)
	{
		str[i] = n1 % 10 + '0';
		n1 = n1 / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
