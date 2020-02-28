/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:17:39 by boyola            #+#    #+#             */
/*   Updated: 2020/02/26 16:53:46 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill a string with a value.
*/

unsigned char	*ft_strset(unsigned char *b, unsigned char c, size_t len)
{
	unsigned char *dup;

	dup = (unsigned char*)b;
	while (len > 0)
	{
		*dup = c;
		dup++;
		len--;
	}
	return (b);
}
