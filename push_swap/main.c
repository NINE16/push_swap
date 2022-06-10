/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:04:20 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:04:20 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		i;

	stack = NULL;
	if (argc == 2)
	stack = init(stack, argc);
}

t_stack	*init(t_stack *stack, int argc)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a_length = 0;
	stack->b_length = 0;
	stack->a_head = NULL;
	stack->a_tail = NULL;
	stack->b_head = NULL;
	stack->b_tail = NULL;
	return (stack);
}

// get the dynamic input and add it in the stack
// void	put_in_stack(t_stack *stack, char *value)
// {
// 	int	val;

// 	while (value [++val])
// 	{
// 		insert_end(stack->a_head, val);
// 	}
// }

// void	check_arg(t_stack stack, char **argv)
// {

// }