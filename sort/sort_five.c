/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:43:36 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 00:10:44 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
    get_min_to_top(stack_a);
    push(stack_a, stack_b, "pb");
    if (stack_a->size == 4)
    {
        get_min_to_top(stack_a);
        push(stack_a, stack_b, "pb");
    }
    sort_three(stack_a);
    push(stack_b, stack_a, "pa");
    push(stack_b, stack_a, "pa");
    return ;
}