/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_symb_word.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:48:57 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 16:03:05 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts number of words except char c.
*/

int	ft_count_symb_word(char *s, char c)
{
	int	i;
	int	len;
	int	count_words;

	i = 0;
	len = 0;
	count_words = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		count_words++;
	}
	return (count_words);
}
