/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:45:30 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 17:56:10 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int    main(void)
{
    char    s[] = "Soy un pollito mojado";
    int        c;
    int        n;

    c = 'i';
    n = 20;
    printf("%s\n", ft_memchr(s, c, n));
    return (0);
}
