/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boyola <boyola@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:58:28 by boyola            #+#    #+#             */
/*   Updated: 2020/02/28 19:00:08 by boyola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	if (!lst || !f)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list = f(lst);
	if (list->next == lst->next)
		ft_lstmap(lst->next, f);
	else
		return (NULL);
	return (list);
}
