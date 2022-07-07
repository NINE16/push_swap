/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:07:19 by nnemeth           #+#    #+#             */
/*   Updated: 2022/07/05 12:38:26 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_free_stack(t_node **tail, t_node **head)
{
	t_node	*curr;

	curr = *tail;
	if (*tail == NULL)
		return ;
	while (curr->next)
	{
		curr = curr->next;
		free(curr->back);
	}
	free(curr);
	*tail = NULL;
	*head = NULL;
}

void	sorted(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->a_tail)
		ft_free_stack(&stack->a_tail, &stack->a_head);
	if (stack->b_tail)
		ft_free_stack(&stack->b_tail, &stack->b_head);
	free(stack);
	stack = NULL;
}
