/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_symb_word.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:48:57 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 20:56:57 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Counts number of symbols and words except char c.
*/

int	ft_count_symb_word(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
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
	}
	return (len);
}

int main(void)
{
	char *s;

	s = ft_strdup("hel*******lo");

	char c = '*';
	printf("%i", ft_count_symb_word(s, c));
	return (0);
}
