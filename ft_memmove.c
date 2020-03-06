/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:46:51 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 18:57:49 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy byte string. !!!If overlap then copy from end!!!
** Returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s < d)
	{
		len--;
		while (len != 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)dst);
}
