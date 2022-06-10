/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:01:42 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 17:14:35 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack, int args)
{
	t_node	*curr;

	curr = stack->a_tail;
	if (curr == NULL)
		return (1);
	while (curr < curr->next)
	{
		curr = curr->next;
		if (curr < curr->next)
			return (0);
	}
	if (curr == stack->a_head)
		return (1);
	else
		return (0);
}
