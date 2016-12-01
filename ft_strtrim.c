/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <xmillero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 09:28:41 by xmillero          #+#    #+#             */
/*   Updated: 2016/12/01 18:04:53 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*s1;
	unsigned int	start;
	size_t			len;
	int				l;
	int				i;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	start = i;
	if (s[i] != '\0')
	{
		l--;
		while ((s[l] == ' ' || s[l] == '\n' || s[l] == '\t') && l > 0)
			l--;
		len = l - i + 1;
	}
	s1 = ft_strsub(s, start, len);
	return (s1);
}
