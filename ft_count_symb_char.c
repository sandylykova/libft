/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_symb_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 20:28:09 by boyola            #+#    #+#             */
/*   Updated: 2020/03/06 20:37:41 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts total number of symbols and characters except char c.
*/

int	ft_count_symb_char(char *s, char c)
{
	int i;
	int total;

	i = 0;
	total = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			total++;
			i++;
		}
	}
	return (total);
}
