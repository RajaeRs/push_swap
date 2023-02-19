/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:34:19 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/18 18:25:31 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push(t_stack *stack_from, t_stack *stack_to, char *name)
{
    if (stack_from->top == -1)
        return ;
    stack_to->data[stack_to->top + 1] = stack_from->data[stack_from->top];
    stack_to->top++;
    stack_to->size++;
    stack_from->size--;
    stack_from->top--;
    print_operation(name);
    return ;
}
