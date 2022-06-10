/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:05:01 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:05:01 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift down all elements of stack a by 1.
void	rra(t_stack *stack)
{
	insert_beginning(&stack->a_tail, stack->a_head->value);
	stack->a_head = stack->a_head->back;
	write(1, "rra\n", 4);
}

//Shift down all elements of stack b by 1.
void	rrb(t_stack *stack)
{
	insert_beginning(&stack->b_tail, stack->b_head->value);
	stack->b_head = stack->b_head->back;
	write(1, "rra\n", 4);
}

void	rrr(t_stack *stack)
{
	insert_beginning(&stack->a_tail, stack->a_head->value);
	stack->a_head = stack->a_head->back;
	insert_beginning(&stack->b_tail, stack->b_head->value);
	stack->b_head = stack->b_head->back;
	write(1, "rrr\n", 4);
}
