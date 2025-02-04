/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:48:41 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/02 17:57:43 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_check;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_check = *lst;
	while (last_check -> next)
		last_check = last_check -> next;
	last_check -> next = new;
	return ;
}
/*
int main (void)
{
	int tab[] = {1, 2, 3, 0};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
		t_list * tmp = l;
	while (tmp) {
        printf("%d -> ", *(int*)(tmp->content));
        tmp = tmp->next;
	}
}
*/