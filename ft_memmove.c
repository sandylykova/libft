/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:46:51 by boyola            #+#    #+#             */
/*   Updated: 2020/02/25 15:20:37 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	len--;
	if (s < d)
	{
		while (len >= 0)
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
	return ((unsigned char*)dst);
}
