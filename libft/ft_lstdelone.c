/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:07:14 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/01 16:44:43 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
/*
void del_int(void *content) {
    free(content);
}

int main(void) {
    // Create a t_list structure
    t_list *node = (t_list*)malloc(sizeof(t_list));
    if (!node) {
        perror("Failed to allocate memory for node");
        return 1;
    }

    // Example: Allocate memory for integer content
    int *data = (int*)malloc(sizeof(int));
    *data = 123;  // Example integer value
    node->content = data;
    node->next = NULL;

    // Test ft_lstdelone function
    printf("Before deleting: node->content = %d\n", *(int*)(node->content));
    ft_lstdelone(node, del_int);
    printf("After deleting: node = %p\n", (void*)node);
    // node should now be NULL after deletion
    return 0;
}
*/