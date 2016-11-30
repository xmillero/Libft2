/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:48:08 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/22 11:23:08 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlcpy() and strlcat() functions copy and concatenate strings
** respectively. They are designed to be safer, more consistent, and less
** error prone replacements for strncpy(3) and strncat(3). Unlike those
** functions, strlcpy() and strlcat() take the full size of the buffer
** (not just the length) and guarantee to NUL-terminate the result
** (as long as size is larger than 0 or, in the case of strlcat(), as long
** as there is at least one byte in dst). Note that a byte
** for the NUL should be included in size. Also note that strlcpy() and
** strlcat() only operate on true ``C'' strings. This means that for
** strlcpy() src must be NUL-terminated and for strlcat() both src and dst
** must be NUL-terminated.he strlcat() function appends the NUL-terminated
** string src to the end of dst. It will append at most size - strlen(dst) -
** 1 bytes, NUL-terminating the result. The source and destination strings
** should not overlap, as the behavior is undefined.Note however, that if
** strlcat() traverses size characters without finding a NUL, the length of
** the string is considered to be size and the destination string will not
** be NUL-terminated (since there was no space for the NUL).  This keeps
** strlcat() from running off the end of a string.  In practice this should
** not happen (as it means that either size is incorrect or that dst is not
** a proper `C' string). The check exists to prevent potential security
** problems in incorrect code.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	dst_size;

	count = 0;
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (ft_strlen(src) + size);
	while (src[count] && count < (size - dst_size - 1))
	{
		dst[dst_size + count] = src[count];
		count++;
	}
	dst[dst_size + count] = '\0';
	return (dst_size + ft_strlen(src));
}
