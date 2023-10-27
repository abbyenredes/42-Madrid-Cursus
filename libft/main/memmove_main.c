/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 07:48:39 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 07:49:16 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main (void)
{
   char dest[] = "gatito";
   const char src[]  = "perro";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 2);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
