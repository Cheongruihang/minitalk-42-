/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:48:08 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/02/09 17:36:21 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

volatile int	g_ack_received;

static void	ack_handler(int sig)
{
	if (sig == SIGUSR1)
	{
		g_ack_received = 1;
		ft_printf("Signal 1 received\n");
	}
	else
	{
		g_ack_received = 1;
		ft_printf("Signal 0 Received\n");
	}
}

void	send_signal(int pid, char *str)
{
	int				i;
	int				bit;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		bit = 7;
		while (bit >= 0)
		{
			g_ack_received = 0;
			if ((c >> bit) & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			while (g_ack_received == 0)
				usleep(100);
			bit--;
		}
	}
}

int	main(int ac, char **av)
{
	int		pid;

	if (ac != 3)
		ft_printf("Bad input. Try again!\n");
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		signal(SIGUSR1, ack_handler);
		signal(SIGUSR2, ack_handler);
		send_signal (pid, av[2]);
		send_signal(pid, "\n");
		return (0);
	}
}
