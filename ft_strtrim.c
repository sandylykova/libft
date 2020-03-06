/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:59:26 by boyola            #+#    #+#             */
/*   Updated: 2020/03/06 15:39:34 by boyola           ###   ########.fr       */
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
	char	*result;
	int		tail;
	int		head;

	if (!s)
		return (NULL);
	tail = ft_strlen(s);
	while (s[tail - 1] == ' ' || s[tail - 1] == '\t' || s[tail - 1] == '\n')
		tail--;
	head = -1;
	while (s[++head] == ' ' || s[head] == '\t' || s[head] == '\n')
		tail--;
	if (tail <= 0)
		tail = 0;
	result = (char*)malloc(sizeof(char) * (tail + 1));
	if (result == NULL)
		return (NULL);
	s += head;
	head = -1;
	while (++head < tail)
		result[head] = *s++;
	result[head] = '\0';
	return (result);
}