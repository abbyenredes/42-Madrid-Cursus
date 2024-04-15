/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:37:46 by abigamas          #+#    #+#             */
/*   Updated: 2024/03/12 13:15:47 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    int i;
    char *line;


    if (argc < 3)
        return (printf("Invalid arguments\n"), EXIT_FAILURE);

    fd = open(argv[1], O_RDONLY);
	//fd = 0; 
	i = atoi(argv[2]);

    while (i--)
    {
        line = get_next_line(fd);
        printf("%s", line);
        free(line);

    }
    close(fd);
    return (0);
}
