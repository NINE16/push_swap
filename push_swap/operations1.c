/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:48 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:04:48 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first 2 elements at the top of stack a.
void	sa(t_stack *stack)
{
	t_node	*tmp;

	tmp = NULL;
	if (stack->a_tail && stack->a_tail->next)
	{
		tmp = stack->a_tail->value;
		stack->a_tail->value = stack->a_tail->next->value;
		stack->a_tail->next->value = tmp;
	}
	write(1, "sa\n", 3);
}

//Swap the first 2 elements at the top of stack b
void	sb(t_stack *stack)
{
	t_node	*tmp;

	tmp = NULL;
	if (stack->b_tail && stack->b_tail->next)
	{
		tmp = stack->b_tail->value;
		stack->b_tail->value = stack->b_tail->next->value;
		stack->b_tail->next->value = tmp;
	}
	write(1, "sb\n", 3);
}

//sa and sb at the same time

void	ss(t_stack *stack)
{
	t_node	*tmp;

	tmp = NULL;
	if (stack->a_tail && stack->a_tail->next)
	{
		tmp = stack->a_tail->value;
		stack->a_tail->value = stack->a_tail->next->value;
		stack->a_tail->next->value = tmp;
	}
	tmp = NULL;
	if (stack->b_tail && stack->b_tail->next)
	{
		tmp = stack->b_tail->value;
		stack->b_tail->value = stack->b_tail->next->value;
		stack->b_tail->next->value = tmp;
	}
	write(1, "ss\n", 3);
}

//Take the first element at the top of b 
//and put it at the top of a
void	pa(t_stack *stack)
{
	if (stack->b_tail != NULL)
	{
		insert_beginning(&stack->a_tail, stack->b_tail->value);
		stack->b_tail = stack->b_tail->next;
		stack->a_tail->back = NULL;
		stack->b_tail->next = NULL;
	}
	write(1, "pa\n", 3);
}

//Take the first element at the top of a 
//and put it at the top of b.
void	pb(t_stack *stack)
{
	if (stack->a_tail != NULL)
	{
		insert_beginning(&stack->b_tail, stack->a_tail->value);
		stack->a_tail = stack->a_tail->next;
		stack->a_tail->back = NULL;
		stack->b_tail->next = NULL;
	}
	write(1, "pb\n", 3);
}
