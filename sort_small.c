/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:57:40 by nnemeth           #+#    #+#             */
/*   Updated: 2022/07/04 18:00:43 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	sa(stack);
	exit(0);
}

void	sort_3(t_stack *stack)
{
	int	head;
	int	tail;
	int	middle;

	head = stack->a_head->value;
	tail = stack->a_tail->value;
	middle = stack->a_tail->next->value;
	if (tail > middle && middle < head && head > tail)
		sa(stack);
	if (tail > middle && head < tail && middle > head)
	{
		sa(stack);
		rra(stack);
	}
	else if (tail > middle && middle < head && head < tail)
		ra(stack);
	else if (tail < middle && middle > head && head > tail)
	{
		sa(stack);
		ra(stack);
	}
	else if (middle > head && tail < middle && head < tail)
		rra(stack);
}

void	sort_4(t_stack *stack)
{
	while (stack->a_tail->value != 0)
		ra(stack);
	pb(stack);
	sort_3(stack);
	pa(stack);
}

void	if_3_for_5(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a_tail->value;
	second = stack->a_tail->next->value;
	third = stack->a_tail->next->next->value;
	if (first == 2 && second == 4 && third == 3)
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	if (first == 3 && second == 2 && third == 4)
		sa(stack);
	if (first == 3 && second == 4 && third == 2)
		rra(stack);
	if (first == 4 && second == 2 && third == 3)
		ra(stack);
	if (first == 4 && second == 3 && third == 2)
	{
		sa(stack);
		rra(stack);
	}	
}

void	sort_5(t_stack *stack)
{
	while (stack->a_tail->value == 2 || stack->a_tail->value == 3
		|| stack->a_tail->value == 4)
		ra(stack);
	pb(stack);
	while (stack->a_tail->value == 2 || stack->a_tail->value == 3
		|| stack->a_tail->value == 4)
		ra(stack);
	pb(stack);
	if_3_for_5(stack);
	if (stack->b_tail->value < stack->b_tail->next->value)
		sb(stack);
	pa(stack);
	pa(stack);
}
