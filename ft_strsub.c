/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:36:52 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 18:47:33 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” substring from the string
** given as argument. The substring begins at indexstart and is of size len. If start and
** len aren’t refering to a valid substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int	i;

	substr = (char *)(malloc(sizeof(char) * (len + 1)));
	i = 0;
	if (substr == NULL || !s)
		return (NULL);
	while (s[start] != '\0' && len > i)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
