/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:59:26 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 18:34:34 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters ’ ’,
** ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end,
** the function returns a copy of s. If the allocation
** fails the function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		j;
	int		c;
	char	*copy;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		i++;
	c = i;
	len = i - j;
	copy = (char *)(malloc(sizeof(char) * (len + 1)));
	if (copy == NULL)
		return (NULL);
	j = 0;
	while (s[c] != '\0' && s[c] != ' ' && s[c] != '\n' && s[c] != '\t')
		copy[j++] = s[c++];
	copy[j] = '\0';
	return (copy);
}
