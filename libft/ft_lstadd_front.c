/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:25:25 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/01 17:16:20 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int main (void)
{
	t_list *head = NULL;

	t_list	*l = lstnew(strdup("nyacat"));
	t_list	*n = lstnew(strdup("OK"));
	
	ft_lstadd_front(&l, n);
	 printf("List after adding nodes at the front:\n");
    t_list *current = head;
    while (current) {
        printf("%d -> ", *(int*)(current->content));
        current = current->next;
    }
 return (0);
}
*/