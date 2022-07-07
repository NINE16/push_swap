/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:01:42 by nnemeth           #+#    #+#             */
/*   Updated: 2022/07/05 14:51:56 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*curr;

	curr = stack->a_tail;
	while (curr->next)
	{
		if (curr->value < curr->next->value)
			curr = curr->next;
		else
			return (0);
	}
	return (1);
}

void	check_dups(t_stack *stack)
{
	t_node	*dup;
	t_node	*tmp;

	dup = stack->a_tail;
	while (dup && dup->next)
	{
		tmp = dup->next;
		while (tmp != NULL)
		{
			if (dup->value == tmp->value)
			{
				error();
			}
			tmp = tmp->next;
		}
		dup = dup->next;
	}
}

long long int	ft_atoi_check(char *str)
{
	int				i;
	int				sign;
	long long int	value;

	value = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		check_error(str, i);
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 || ft_strlen(str) > 12)
			error();
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	check_min_max(value, sign);
	return (value * sign);
}

void	check_error(char *str, int i)
{	
	if (ft_isdigit(str[i + 1]) == 0)
		error();
}

void	check_min_max(long long int value, int sign)
{	
	if (((value * sign) > MAX_INT) || ((value * sign) < MIN_INT))
		error();
}
