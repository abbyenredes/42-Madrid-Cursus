#include "minitalk.h"

void    print_title(void)
{
        int     pid;

        pid = getpid();
        ft_printf("\x1b[32m------------------------------------------------------------\n");
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
        ft_printf("\x1b[33mHi this is the PID: %d\x1b[0m\n", pid);
        ft_printf("\x1b[32m------------------------------------------------------------\x1b[0m\n");
        ft_printf("\n");
        ft_printf("\033[90mWaiting for a message...\033[0m\n");
}

void	ft_reconstruct_char(int sig, siginfo_t *info, void *context)
{
	static int	bit;
	static int	str;

	(void)context;
	if (sig == SIGUSR1)
		str |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", str);
		kill(info->si_pid, SIGUSR2);
		bit = 0;
		str = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	act;
	
	print_title();
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	act.sa_sigaction = ft_reconstruct_char;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (argc == 1)
	{
		pause();
	}
	return (0);
}
