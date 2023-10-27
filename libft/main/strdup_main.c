/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:29:28 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/27 17:31:46 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
    char *original = "palomitas";
    char *duplicate = ft_strdup(original);
    if (duplicate != NULL)
    {
        printf("Original: %s, %p\n", original, original);
        printf("Duplicate: %s, %p \n", duplicate, duplicate);
        free(duplicate);
    }
    return 0;
}
