/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:23:23 by boyola            #+#    #+#             */
/*   Updated: 2020/03/07 15:23:27 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers
** must be supported. If the allocation fails, the function returns NULL.
*/

static void	itoa_isnegative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char		*ft_itoa(int n)
{
	int		temp;
	int		len;
	int		negative;
	char	*string;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = n;
	len = 2;
	negative = 0;
	itoa_isnegative(&n, &negative);
	while (temp /= 10)
		len++;
	len += negative;
	if ((string = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	string[--len] = '\0';
	while (len--)
	{
		string[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		string[0] = '-';
	return (string);
}
