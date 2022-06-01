/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:29:03 by marvin            #+#    #+#             */
/*   Updated: 2022/05/31 11:29:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include "../libft/libft.h "

typedef struct DNode t_node;

struct DNode
{
    int value;
    t_node *back;
    t_node *next;
};

typedef struct DList
{
    int length;
    struct DNode *begin;
    struct DNode *end;
} t_DList;

t_DList new_dlist(void);
void    is_empty_dlist(DList li);
int     dlist_length(DList li);
int     dlist_first(DList li);
int     dlist_last(DList li);

#endif 