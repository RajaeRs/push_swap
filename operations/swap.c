/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:49:50 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/17 20:20:45 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap(t_stack *stack, char *name) // the name indicat the stack
{
    int	tmp;

	tmp = 0;
    if (stack->size < 2)
        return ;
    tmp = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack->top - 1];
	stack->data[stack->top - 1] = tmp;
	if (name != NULL)
		print_operation(name);
	return ;
}

void    swap_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	print_operation("ss");
	return ;
}