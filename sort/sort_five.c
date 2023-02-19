/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:43:36 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 23:07:23 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
    get_min_to_top(stack_a);
    // test (stack_a);
    push(stack_a, stack_b, "pb");
    if (stack_a->size == 4)
    {
        get_min_to_top(stack_a);
        // test (stack_a);
        push(stack_a, stack_b, "pb");
    }
    // test (stack_a);
    sort_three(stack_a);
    push(stack_b, stack_a, "pa");
    // rotate(stack_a, "ra");
    push(stack_b, stack_a, "pa");
	// if (stack_b->size == 1)
	// {
	// 	rotate(stack_a, "ra");
	// 	push(stack_b, stack_a, "pa");
	// }
    // test (stack_a);
    return ;
}