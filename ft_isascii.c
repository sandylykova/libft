/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:48:30 by boyola            #+#    #+#             */
/*   Updated: 2020/02/25 21:06:26 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Test for ASCII character.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
