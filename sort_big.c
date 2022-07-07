/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:38:01 by nnemeth           #+#    #+#             */
/*   Updated: 2022/07/04 14:35:43 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *stack)
{
	int	max_num;
	int	size;
	int	j;
	int	tail;

	size = stack->a_length;
	max_num = size - 1;
	while ((max_num >> stack->max_bites) != 0)
		stack->max_bites++;
	while (stack->i < stack->max_bites)
	{
		j = 0;
		while (j < size)
		{
			tail = stack->a_tail->value;
			if (((tail >> stack->i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		stack->i++;
		while (stack->b_tail != 0)
			pa(stack);
	}
}
