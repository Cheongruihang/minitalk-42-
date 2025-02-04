/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:12:04 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/21 13:12:04 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int num, siginfo_t *info, void *context)
{
	static int				bit = 7;
	static unsigned char	c = 0;
	static pid_t client_pid = 0;

	(void)context;
	if (client_pid == 0)  
        client_pid = info->si_pid;
	if (num == SIGUSR1)
		c |= (1 << bit); // just now in the client i right swift all the bit and now left swith to get back the char
	
	if (bit == 0)
	{
		if (c == '\0')
			ft_printf ("\n");
		else 
			ft_printf("%c", c);//write after getting all bit
		c = 0;
		bit = 7;
	}
	else
		bit--;
	usleep(100);
	kill(client_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction sa;
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = handle_signal;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
	ft_printf("server pid = %d\n", getpid());
	
	while (1)
		pause();
	return (0);
}