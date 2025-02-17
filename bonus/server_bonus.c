/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:12:04 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/02/09 17:50:20 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handle_signal(int num, siginfo_t *info, void *context)
{
	static int					bit = 7;
	static unsigned char		c;
	static pid_t				client_pid = 0;

	(void)context;
	if (client_pid == 0 || client_pid != info->si_pid)
		client_pid = info->si_pid;
	if (num == SIGUSR1)
		c |= (1 << bit);
	if (bit == 0)
	{
		ft_printf("%c", c);
		c = 0;
		bit = 7;
	}
	else
		bit--;
	if (num == SIGUSR1)
		kill(client_pid, SIGUSR1);
	else
		kill(client_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handle_signal;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("server pid = %d\n", getpid());
	while (1)
		pause();
	return (0);
}
