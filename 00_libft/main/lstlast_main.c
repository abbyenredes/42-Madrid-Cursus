/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:45:20 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 00:00:51 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	**lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("Jerbo");
	node2 = ft_lstnew("Rata");
	node3 = ft_lstnew("Hamster");
	*lst = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%s\n", (*lst)->content);
	printf("%s\n", ft_lstlast(*lst)->content);
	return (0);
}
