/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:08:01 by boyola            #+#    #+#             */
/*   Updated: 2020/02/25 16:31:04 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Size-bounded string concatenation.
** Returns the total length of the string they tried to create.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(dst);
	len--;
	if (dstsize > len)
	{
		while (len - 1 < dstsize && *src)
		{
			dst[len] = *src;
			len++;
			src++;
		}
	}
	if (dstsize < len)
		return (dstsize + ft_strlen(src));
	return (len + ft_strlen(src));
}
