/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:18:41 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 14:31:19 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate a substring in a string,
** where not more than len characters are searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[j] != '\0' && j < len)
	{
		if (haystack[j] == needle[0])
		{
			i = 0;
			while (needle[i] != '\0' && haystack[j + i] == needle[i] &&
							(j + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char*)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
