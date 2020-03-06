/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:31:43 by boyola            #+#    #+#             */
/*   Updated: 2020/03/05 18:26:06 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Save a copy of a string.
** Function allocates sufficient memory for a copy of the string s1,
** does the copy, and returns a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (dup != NULL)
		ft_strcpy(dup, s1);
	return (dup);
}
