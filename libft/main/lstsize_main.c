/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:28:45 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/12 02:51:30 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew("Rata");
	lst2 = ft_lstnew("Hamster");
	lst3 = ft_lstnew("Jerbo");
	lst3->next = NULL;
	lst2->next = lst3;
	lst1->next = lst2;
	*lst = lst1;
	printf("%d\n", ft_lstsize(*lst));
	return (0);
}
