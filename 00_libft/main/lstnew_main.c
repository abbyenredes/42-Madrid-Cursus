/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:35:35 by abigamas          #+#    #+#             */
/*   Updated: 2023/11/11 22:26:26 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	void	*content;

	content = "jerbo";
	list = ft_lstnew(content);
	printf("%s\n", list->content);
	return (0);
}
