/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:32:49 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 18:37:41 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by
** spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
*/

static char		*ft_word_symb(const char *str, char c, int *i)
{
	char	*s;
	int		k;
	int		len;
	int		j;

	len = 0;
	j = *i;
	while (str[j] != c && str[j])
	{
		j++;
		len++;
	}
	if (!(s = (char *)malloc(sizeof(s) * (len + 1))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**arr;

	i = 0;
	j = 0;
	words = ft_count_symb_word((char *)s, c);
	arr = (char **)(malloc(sizeof(char *) * (words + 1)));
	if (arr == NULL || !s || !c)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0' && j < words)
	{
		arr[j] = ft_word_symb(s, c, &i);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
