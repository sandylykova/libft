/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:32:49 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 20:15:11 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including
** the array itself) obtained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
*/

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	int	j;
	int len;
	char **arr;

	i = 0;
	j = 0;
	len = ft_count_symb_word(s, c);
	*arr = (char **)(malloc(sizeof(char) * (len + 1)));
	if (*arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		while (s[i] != c)
		{
			*arr[j] = s[i];
			i++;
		}
		j++;
	}
	return (**arr);
}
