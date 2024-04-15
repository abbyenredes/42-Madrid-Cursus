/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 00:05:34 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 03:17:35 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Adds the given element ‘new’ to the end of the linked list pointed 
//to by ‘lst’.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new != 0)
	{
		if (*lst == 0)
		{
			*lst = new;
			(*lst)->next = NULL;
		}
		else
			ft_lstlast(*lst)->next = new;
	}
}
