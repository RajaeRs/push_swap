/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:50:23 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/17 20:51:10 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rev_rotate(t_stack *stack, char *name)
{
    int i;
    int tmp;

    i = 0;
    tmp = stack->data[i];
    while (i < stack->size - 1)
    {
        stack->data[i] = stack->data[i+1];
        i++;
    }
    stack->data[i] = tmp;
    if (name != NULL)
		print_operation(name);
    return ;
}

void	rev_rotate_rr(t_stack *stack_a, t_stack *stack_b)
{
    rev_rotate(stack_a, NULL);
    rev_rotate(stack_b, NULL);
	print_operation("rrr");
}