/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:03:33 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/06 00:33:43 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_title(void)
{
	int	pid;

	pid = getpid();
	ft_printf("\x1b[36m------------------------------------------------------------\n");
        ft_printf("\n");
        ft_printf("\n");
        ft_printf("███╗   ███╗██╗███╗   ██╗██╗████████╗ █████╗ ██╗     ██╗  ██╗\n");
        ft_printf("████╗ ████║██║████╗  ██║██║╚══██╔══╝██╔══██╗██║     ██║ ██╔╝\n");
        ft_printf("██╔████╔██║██║██╔██╗ ██║██║   ██║   ███████║██║     █████╔╝ \n");
        ft_printf("██║╚██╔╝██║██║██║╚██╗██║██║   ██║   ██╔══██║██║     ██╔═██╗ \n");
        ft_printf("██║ ╚═╝ ██║██║██║ ╚████║██║   ██║   ██║  ██║███████╗██║  ██╗\n");
        ft_printf("╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝\n");
        ft_printf("\n");
        ft_printf("\n");
        ft_printf("------------------------------------------------------------\n");
        ft_printf("\x1b[35mHi this is the PID: %d\x1b[0m\n", pid);
        ft_printf("\x1b[36m------------------------------------------------------------\x1b[0m\n");
        ft_printf("\n");
        ft_printf("\033[90mWaiting for a message...\033[0m\n");
}

void	ft_reconstruct_char(int sig)
{
	static int	bit;
	static int	i;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	print_title();
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}

	signal(SIGUSR1, ft_reconstruct_char);
	signal(SIGUSR2, ft_reconstruct_char);
	while (argc == 1)
	{
		pause ();
	}
	return (0);
}
