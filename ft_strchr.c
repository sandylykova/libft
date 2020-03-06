/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:36:05 by boyola            #+#    #+#             */
/*   Updated: 2020/03/06 15:47:58 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate character in string.
** Returns a pointer to the located character, or NULL if the character does not
** appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c && *str != '\0')
		str++;
	if (*str == '\0' && c != '\0')
		return (NULL);
	return (str);
}
