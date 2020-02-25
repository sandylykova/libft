/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:12:26 by boyola            #+#    #+#             */
/*   Updated: 2020/02/21 13:15:24 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int rev;

	rev = 0;
	while (s[rev] != '\0')
		rev++;
	while (s[rev] != c && rev >= 0)
		rev--;
	if (rev < 0)
		return (NULL);
	return ((char*)(s + rev));
}
