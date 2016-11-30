/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:25:56 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/22 14:26:03 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)src == c)
		{
			*(char *)dest = c;
			dest++;
			return (dest);
		}
		*(char *)dest = *(char *)src;
		i++;
		dest++;
		src++;
	}
	return (NULL);
}
