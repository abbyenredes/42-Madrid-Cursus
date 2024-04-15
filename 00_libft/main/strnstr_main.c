/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:57:42 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/08 10:39:45 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;

    printf("el de abbi--->%s\n El del sistema---->%s\n", ft_strnstr(av[1], av[2], atoi(av[3])), strnstr(av[1], av[2], atoi(av[3])));
    return (0);
}
