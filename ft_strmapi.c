/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:13:00 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/24 13:56:07 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	char	*ptr;
	int		i;

	i = 0;
	if (s && *s && f)
	{
		l = ft_strlen(s);
		ptr = (char *)malloc(sizeof(char) * (l + 1));
		if (!ptr)
			return (NULL);
		while (s[i] != '\0' && ptr != 0)
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
