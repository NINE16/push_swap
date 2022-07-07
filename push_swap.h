/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:05:12 by nnemeth           #+#    #+#             */
/*   Updated: 2022/06/10 15:05:12 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft/libft.h"

typedef struct s_node
{
	int				value;
	int				i;
	int				num;
	struct s_node	*back;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		a_length;
	int		b_length;
	int		i;
	int		value;
	int		max_bites;
	t_node	*a_head;
	t_node	*a_tail;
	t_node	*b_head;
	t_node	*b_tail;
}	t_stack;

# define MIN_INT -2147483648
# define MAX_INT 2147483647

t_stack					*init(t_stack *stack);
void					remove_node(t_node *node);
void					insert_end(t_node **head, int value);
void					insert_beginning(t_node **tail, int value);
void					start_stack(t_node **head, t_node **tail, int value);
int						is_sorted(t_stack *stack);
void					check_dups(t_stack *stack);
void					split_for_stack(t_stack *stack, char **digit);
//operations 
void					sa(t_stack *stack);
void					sb(t_stack *stack);
void					ss(t_stack *stack);
void					pa(t_stack *stack);
void					pb(t_stack *stack);
void					ra(t_stack *stack);
void					rb(t_stack *stack);
void					rr(t_stack *stack);
void					rra(t_stack *stack);
void					rrb(t_stack *stack);
void					rrr(t_stack *stack);

void					check_arg(t_stack *stack, char **argv, int argc);
t_stack					*put_in_stack(t_stack *stack, int value);
long long int			ft_atoi_check(char *str);
void					error(void);
//algo
void					push_swap(t_stack *stack);
void					sort_2(t_stack *stack);
void					sort_3(t_stack *stack);
void					sort_4(t_stack *stack);
void					sort_5(t_stack *stack);
void					radix(t_stack *stack);
void					if_3_for_5(t_stack *stack);

void					ft_free_stack(t_node **tail, t_node **head);
void					ft_free_a(t_stack *stack);
void					ft_free_b(t_stack *stack);
void					simplify(t_stack *stack);
void					print_stack_a(t_stack *stack);
void					print_stack_b(t_stack *stack);
void					sorted(t_stack *stack);
void					sort_copy(t_stack *stack);
void					copy_stack(t_stack *stack);
void					check_error(char *str, int i);
void					check_min_max(long long int value, int sign);

#endif 