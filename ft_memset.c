/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:31:50 by boyola            #+#    #+#             */
/*   Updated: 2020/02/21 16:37:39 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dup;

	dup = (unsigned char*)b;
	while (len > 0)
	{
		*dup = (unsigned char)c;
		dup++;
		len--;
	}
	return (b);
}
