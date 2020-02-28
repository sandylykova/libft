/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:07:16 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 14:12:02 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int rev;

	rev = ft_strlen(s);
	while (s[rev] != c && rev != 0)
		rev--;
	if (s[rev] == c)
		return ((char*)(&s[rev]));
	return (NULL);
}
