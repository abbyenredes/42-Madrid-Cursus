/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:20:27 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/11 23:17:07 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Adds the given element ‘new’ to the front of the linked list pointed 
//to by ‘lst’.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
