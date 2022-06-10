/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:54 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:04:54 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Shift up all elements of stack a by 1.
void	ra(t_stack *stack)
{
	insert_end(&stack->a_head, stack->a_tail->value);
	stack->a_tail = stack->a_tail->next;
	//maybe remove node
	write(1, "ra\n", 3);
}

// Shift up all elements of stack b by 1.
void	rb(t_stack *stack)
{
	insert_end(&stack->b_head, stack->b_tail->value);
	stack->b_tail = stack->b_tail->next;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	insert_end(&stack->a_head, stack->a_tail->value);
	stack->a_tail = stack->a_tail->next;
	//maybe remove node
	insert_end(&stack->b_head, stack->b_tail->value);
	stack->b_tail = stack->b_tail->next;
	write(1, "rr\n", 3);
}
