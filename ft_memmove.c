/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:47:10 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/17 19:08:46 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	n--;
	while (n > 0)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n--;
	}
	((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
