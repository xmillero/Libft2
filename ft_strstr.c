/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:01:44 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/21 15:22:25 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** The strstr() function locates the first occurrence of the null-terminated
** string little in the null-terminated string big.
** If little is an empty string, big is returned; if little occurs nowhere in
** big, NULL is returned; otherwise a pointer to the first character of the
** first occurrence of little is returned.
*/

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;
	int memoi;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((char)big[i] != '\0')
	{
		memoi = i;
		j = 0;
		while ((char)big[memoi] == (char)little[j] && (char)little[j] != '\0')
		{
			j = j + 1;
			memoi++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
