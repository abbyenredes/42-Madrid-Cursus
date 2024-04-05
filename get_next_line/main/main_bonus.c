/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:35:59 by abigamas          #+#    #+#             */
/*   Updated: 2024/03/12 13:15:21 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int main(int argc, char **argv)
{
    int fd;
	int fd2;
	int fd3;
	int fd4;
    int i;
    char *line;
	char *line2;
	char *line3;
	char *line4;


    if (argc <= 1)
        return (printf("Invalid arguments\n"), EXIT_FAILURE);

    fd = open(argv[1], O_RDONLY);
    fd2 = open(argv[2], O_RDONLY);
    fd3 = open(argv[3], O_RDONLY);
    fd4 = open(argv[4], O_RDONLY);
    i = atoi(argv[5]);
    
	while (i--)
    {
        line = get_next_line(fd);
        printf("%s", line);
        free(line);

        line2 = get_next_line(fd2);
        printf("%s", line2);
        free(line2);

        line3 = get_next_line(fd3);
        printf("%s", line3);
        free(line3);

        line4 = get_next_line(fd4);
        printf("%s", line4);
        free(line4);
    }
    close(fd);
    close(fd2);
    close(fd3);
    close(fd4);
    return (0);
}
