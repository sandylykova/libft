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
	int		tail;
	int		head;
	char	*copy;
	int		temp;

	if (!s)
		return (NULL);
	tail = ft_strlen(s);
	tail = tail - 1;
	while (s[tail] == ' ' || s[tail] == '\n' || s[tail] == '\t')
		tail--;
	head = 0;
	temp = tail;
	while (s[head] == ' ' || s[head] == '\n' || s[head] != '\t')
	{
		head++;
		temp--;
	}
	if (temp <= 0)
		temp = 0;
	copy = (char *)(malloc(sizeof(char) * (temp + 1)));
	if (copy == NULL)
		return (NULL);
	while (head <= tail)
		copy[head] = *s++;
	copy[head] = '\0';
	return (copy);
}
