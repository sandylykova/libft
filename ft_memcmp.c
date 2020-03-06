/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:33:29 by boyola            #+#    #+#             */
/*   Updated: 2020/03/05 18:26:06 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare byte string.
** Returns zero if the two strings are identical, otherwise returns the
** difference between the first two differing bytes.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = (const unsigned char*)s1;
	ps2 = (const unsigned char*)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n >= 0)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		if (n > 0)
		{
			ps1++;
			ps2++;
		}
	}
	return (0);
}
