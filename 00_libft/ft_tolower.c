/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:31:01 by abigamas          #+#    #+#             */
/*   Updated: 2023/09/25 20:44:08 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function converts an upper-case letter to the corresponding lower-case letter

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
