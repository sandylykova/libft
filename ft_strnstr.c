/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:18:41 by boyola            #+#    #+#             */
/*   Updated: 2020/02/25 20:42:21 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate a substring in a string,
** where not more than len characters are searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*copy_haystack;

	copy_haystack = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char*)copy_haystack);
	while (*copy_haystack && len-- >= needle_len)
	{
		if (*copy_haystack == *needle)
			if (ft_strncmp(needle, copy_haystack, needle_len) == 0)
				return (copy_haystack);
		copy_haystack++;
	}
	return (NULL);
}
