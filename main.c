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

	stack = NULL;
	if (argc >= 2)
	{
		stack = init(stack);
		check_arg(stack, argv, argc);
		check_dups(stack);
		simplify(stack);
		push_swap(stack);
		sorted(stack);
	}
	else
		return (0);
	return (0);
}

t_stack	*init(t_stack *stack)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a_length = 1;
	stack->b_length = 1;
	stack->i = 0;
	stack->max_bites = 0;
	stack->a_head = NULL;
	stack->a_tail = NULL;
	stack->b_head = NULL;
	stack->b_tail = NULL;
	return (stack);
}

void	check_arg(t_stack *stack, char **argv, int argc)
{	
	int		i;
	char	**digit;

	i = 0;
	while (argv[++i])
	{
		if (argc == 2)
		{
			digit = ft_split(argv[i], ' ');
			split_for_stack(stack, digit);
		}
		else
		{
			if (i == 1)
				start_stack(&stack->a_head, &stack->a_tail,
					ft_atoi_check(argv[i]));
			else
				stack = put_in_stack(stack, ft_atoi_check(argv[i]));
		}
	}
}

void	split_for_stack(t_stack *stack, char **digit)
{
	int	j;
	int	i;

	j = -1;
	i = 0;
	while (digit[++j])
	{
		if (j == 0)
		{
			start_stack(&stack->a_head,
				&stack->a_tail, ft_atoi_check(digit[j]));
		}
		else
			stack = put_in_stack(stack, ft_atoi_check(digit[j]));
	}
	while (digit[i])
	{
		free(digit[i]);
		i++;
	}
	free(digit);
}

t_stack	*put_in_stack(t_stack *stack, int value)
{
	insert_end(&stack->a_head, value);
	stack->a_length++;
	return (stack);
}
