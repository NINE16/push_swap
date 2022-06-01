/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:13 by marvin            #+#    #+#             */
/*   Updated: 2022/05/31 10:45:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

DList   new_list(void)
{
    return NULL;
}

void    is_empty_dlist(DList li)
{
    if(li == NULL)
        return true;
    
    return false;
}

int dlist_lenght(DList li)
{
    if(is_empty_dlist(li))
        return 0;

    return li->lenght;
}

int dlist_first(DList li);
{
    if(is_empty_dlist(li))
        exit(1);
    return li->begin->value;
}

int dlist_last(DList li);
{
    if(is_empty_dlist(li))
        exit(1);
    return li->end->value;
}

int main(int argc, char **argv)
{
    t_DList *a;
    t_DList *b;

    if (argc > 1)
    {
        a = init_stack();
        b = init_stack();
    }
}
