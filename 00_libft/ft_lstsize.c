/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:17:34 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 02:57:20 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Calculates and returns the number of nodes in a given linked list ‘lst’. 

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
