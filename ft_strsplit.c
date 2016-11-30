/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:51:25 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/29 12:13:21 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static char		*ft_strsmot(char const *s, char c, int n)
{
	char	*mot;
	int		start;
	int		i;

	i = 0;
	while (n >= 0)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		n--;
	}
	mot = ft_strsub(s, start, i - start);
	return (mot);
}

char			**ft_strsplit(char const *s, char c)
{
	int		y;
	int		i;
	char	**tab;

	i = 0;
	y = ft_strsnbmot(s, c);
	if (y == -1)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (y + 1));
	if (tab == NULL)
		return (NULL);
	tab[y] = NULL;
	while (i < y)
	{
		tab[i] = ft_strsmot(s, c, i);
		if (tab[i] == NULL)
			return (NULL);
		i++;
	}
	return (tab);
}
