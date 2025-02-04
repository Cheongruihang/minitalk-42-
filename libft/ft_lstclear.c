/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:09:00 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/01 16:56:01 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(del)(temp->content);
		free(temp);
	}
	*lst = NULL;
}

/*
void del_int(void *content) {
    free(content);
}

// Function to create a new list node with integer content
t_list *create_node(int value) {
    t_list *node = (t_list*)malloc(sizeof(t_list));
    if (!node) {
        perror("Failed to allocate memory for node");
        return NULL;
    }

    int *data = (int*)malloc(sizeof(int));
    if (!data) {
        perror("Failed to allocate memory for data");
        free(node);
        return NULL;
    }
    *data = value;

    node->content = data;
    node->next = NULL;

    return node;
}

int main() {
    t_list *head = NULL;

    // Populate the linked list with some nodes
    head = create_node(10);
    head->next = create_node(20);
    head->next->next = create_node(30);

    // Test ft_lstclear function
    printf("Before clearing the list:\n");
    t_list *current = head;
    while (current) {
        printf("%d -> ", *(int*)(current->content));
        current = current->next;
    }
    printf("NULL\n");

    ft_lstclear(&head, del_int);

    printf("After clearing the list:\n");
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        printf("List still contains elements (unexpected)\n");
    }

    return 0;
}*/