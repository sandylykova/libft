/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:31:50 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 12:06:51 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill a byte string with a byte value.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dup;

	dup = (unsigned char*)b;
	c = (unsigned char)c;
	while (len > 0)
	{
		*dup = c;
		dup++;
		len--;
	}
	return (b);
}
