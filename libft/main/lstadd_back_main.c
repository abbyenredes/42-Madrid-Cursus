/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:03:15 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 02:29:37 by abigamas         ###   ########.fr       */
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
	ft_lstadd_back(list, new);
	printf("%s, ", (*list)->content);
	printf("%s\n", (*list)->next->content);
	return (0);
}
