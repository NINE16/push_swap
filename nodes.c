/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:40 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:04:40 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//insert at the beginning of the list
void	insert_beginning(t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->num = value;
	new_node->back = NULL;
	new_node->next = *tail;
	(*tail)->back = new_node;
	*tail = new_node;
}

void	insert_end(t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->num = value;
	new_node->next = NULL;
	new_node->back = *head;
	(*head)->next = new_node;
	*head = new_node;
}

void	remove_node(t_node *node)
{
	if (node->back != NULL)
	{
		node->back->next = node->next;
	}
	if (node->next != NULL)
	{
		node->next->back = node->back;
	}
	free(node);
	node = NULL;
}

void	start_stack(t_node **head, t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		error();
	new_node->value = value;
	new_node->num = value;
	new_node->next = NULL;
	new_node->back = NULL;
	*head = new_node;
	*tail = new_node;
}
