/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:18:30 by boyola            #+#    #+#             */
/*   Updated: 2020/02/27 18:35:45 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached.
** If the 2 strings are identical, the function returns 1, or 0 otherwise.
*/

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	if ( s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}
