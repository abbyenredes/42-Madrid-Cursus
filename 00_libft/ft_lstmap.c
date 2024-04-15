/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:36:57 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 11:29:36 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp_node;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp_node = ft_lstnew(lst->content);
		if (!tmp_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		tmp_node->content = f(tmp_node->content);
		ft_lstadd_back (&new_list, tmp_node);
		lst = lst->next;
	}
	return (new_list);
}
