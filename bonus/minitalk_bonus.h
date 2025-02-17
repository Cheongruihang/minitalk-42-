/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:54:13 by chrui-ha          #+#    #+#             */
/*   Updated: 2025/01/21 12:54:13 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <signal.h>

void	handle_signal(int num, siginfo_t *info, void *context);

void	send_signal(int pid, char *str);

#endif
