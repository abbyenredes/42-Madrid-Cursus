/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:14:10 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/01 15:20:21 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
 
#define  BUF_SIZE  20
 
int main(void)
{
   char buffer[BUF_SIZE + 1];
   char *string;
 
  ft_ memset(buffer, 0, sizeof(buffer));
   string = (char *) ft_memset(buffer,'A', 10);
   printf("\nBuffer contents: %s\n", string);
   ft_memset(buffer+10, 'B', 10);
   printf("\nBuffer contents: %s\n", buffer);
}
