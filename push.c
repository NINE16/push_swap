/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:21:03 by nnemeth           #+#    #+#             */
/*   Updated: 2022/07/04 14:35:37 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *stack)
{
	if (is_sorted(stack) == 1)
		exit(0);
	else if (stack->a_length == 2)
		sort_2(stack);
	else if (stack->a_length == 3)
		sort_3(stack);
	else if (stack->a_length == 4)
		sort_4(stack);
	else if (stack->a_length == 5)
		sort_5(stack);
	else
		radix(stack);
}

void	simplify(t_stack *stack)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		i;

	sort_copy(stack);
	tmp_b = stack->b_tail;
	i = 0;
	while (tmp_b != NULL)
	{
		tmp_a = stack->a_tail;
		while (tmp_a != NULL)
		{
			if (tmp_b->value == tmp_a->num)
			{
				tmp_a->value = i;
				i++;
				break ;
			}
			tmp_a = tmp_a->next;
		}
		tmp_b = tmp_b->next;
	}
	ft_free_stack(&stack->b_tail, &stack->b_head);
}

void	sort_copy(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*tmp;

	i = stack->a_length + 1;
	copy_stack(stack);
	while (i > 0)
	{
		tmp = stack->b_tail;
		while (tmp->next != NULL)
		{
			j = 0;
			if (tmp->value > tmp->next->value)
			{
				j = tmp->value;
				tmp->value = tmp->next->value;
				tmp->next->value = j;
			}
			tmp = tmp->next;
		}
		i--;
	}
}

void	copy_stack(t_stack *stack)
{
	t_node	*curr;

	curr = stack->a_tail->next;
	start_stack(&stack->b_head, &stack->b_tail, stack->a_tail->value);
	while (curr != NULL)
	{
		insert_end(&stack->b_head, curr->value);
		curr = curr->next;
	}
}
