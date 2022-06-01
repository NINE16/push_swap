/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   something.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:07:12 by marvin            #+#    #+#             */
/*   Updated: 2022/05/31 12:07:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

DList push_back_dlist(DList, li, int x)
{
    DNode *element;

    element = malloc(sizeof(*element));

    element->value = x;
    element->next = NULL;
    element->back = NULL;

    if(is_empty_dlist(li))
    {
        li = malloc(sizeof(*li));

        if(li == NULL)
        {
            li->lenght = 0;
            li->begin = element;
            li->end = element;
        }
        else 
        {
            li->end->next = element;
            element->back = li->end;
            li->end = element;
        }
        li->length++;

        return li;

    }

}