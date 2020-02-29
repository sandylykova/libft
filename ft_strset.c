/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:17:39 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 18:52:58 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill a string with a value.
*/

char	*ft_strset(char *b, char c, size_t len)
{
	char *dup;

	dup = b;
	while (len > 0)
	{
		*dup = c;
		dup++;
		len--;
	}
	return (b);
}
