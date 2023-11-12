/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:26:59 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 02:17:08 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	**list;
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("rata");
	new = ft_lstnew("hamster");
	*list = node;
	printf("%s\n", (*list)->content);
	ft_lstadd_front(list, new);
	printf("%s, ", (*list)->content);
	printf("%s\n", (*list)->next->content);
	return (0);
}
