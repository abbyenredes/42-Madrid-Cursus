/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:41:58 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/11 22:09:29 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Creates a new node for a linked list and initializes it with the given
//‘content’. 

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
