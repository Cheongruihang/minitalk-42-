/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:48:08 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/21 14:48:08 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile int ack_received;

static void ack_handler(int sig)
{
	if (sig == SIGUSR1)
    	ack_received = 1;  // Set flag when acknowledgment is received
}

void	send_signal(int pid, char *str) // get the server pid to make sure the server received the massege. the str is the massege that i wanna sent
{
	int				i; // index
	int				bit;// bit for a character
	unsigned char	c; // temperory store the character i wanna process

	i = 0;
	while (str[i])// while loop for each character
	{
		c = str[i++];//specified the char
		bit = 7;// reset bit
		while (bit >= 0)//total 8 times
		{
			ack_received = 0; 
			if ((c >> bit) & 1)// check is it 1 in bit
				kill (pid, SIGUSR1);// send a signal to server through the pid number
			else
				kill(pid, SIGUSR2);
			while (ack_received == 0) // Wait for acknowledgment
				usleep(100); // Small delay

			//usleep(100);
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
		send_signal (pid, av[2]);
		send_signal(pid, "\n");
		return (0);
	}
}