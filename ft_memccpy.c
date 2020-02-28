/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:40:37 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 12:16:26 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy string until character found.
**  If the character c occurs in the string src, the copy stops
** and a pointer to the byte after the copy of c in the string dst is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	c = (unsigned char)c;
	while (n > i)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
