/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:04:03 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/22 15:14:09 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*big && little[i] == '\0')
		return ((char *)(big));
	if (len < ft_strlen(little))
		return (NULL);
	while (big[i])
	{
		j = 0;
		while ((i + j) < len && big[i + j] && little[j]
				&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0' || j == len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
